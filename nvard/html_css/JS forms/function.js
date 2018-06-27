function to_realize (form) { 
    var mr_mrs; 
    if(document.getElementById('male').checked) {
        mr_mrs = "Mr.";
    }else if(document.getElementById('female').checked) {
        mr_mrs = "Mrs.";
    }
    var str = [ 'Hi', mr_mrs, form['Name'].value,form['Lastname'].value, '!' ].join('  ');
    document.getElementById ('head').innerHTML = str;
    document.getElementById ('form').style.display = 'none';
    document.getElementById ('container-form').style.display = 'none';
    second_page = document.getElementById ('second_page');
    second_page.style.display = 'block';    
    localStorage.setItem('form', true);
    localStorage.setItem('str', str);

}

function info_cart(form_data) {
    user = {"name": form_data["name"].value,"surname": form_data["surname"].value, "adress": form_data["adress"].value,"country": form_data["country"].value,"phone": form_data["phone"].value,"E-mail": form_data["email"].value}
    var table ='';
    saveLS();
    table +=  createTable(user);
    document.getElementById("container_cart").innerHTML += table;
    for (var i = 0; i < 6; i++) {
        form_data[i].value = "";  
    };
}

function createTable(user) {
    if (!user) {
        return '<p></p>';
    }
    return "<table ><tr><td> Name: </td> <td>" + user.name +"</td></tr><tr><td>Surtname: </td> <td>"+  user.surname
     + "</td></tr><tr><td>Adress: </td> <td>"+ user.adress + "</td></tr><tr><td>Country: </td> <td>"+ 
    user.country + "</td></tr><tr><td>Phone: </td> <td>"+ user.phone + "</td></tr><tr><td>E-mail: </td> <td>"+ user.email + "</td></tr> </table>";
}
function saveLS() {
    count = localStorage.getItem('count');
    count++;
    var user = {"name": form_data["name"].value, 
                "surname": form_data["surname"].value, 
                "adress": form_data["adress"].value, 
                "country": form_data["country"].value,
                "phone": form_data["phone"].value,
                "e-mail": form_data["email"].value};
    localStorage.setItem('user'+String(count), JSON.stringify(user));
    localStorage.setItem('count', count);
}
 function getLS() {
    count = localStorage.getItem('count') || 1;
    for (var i = 1; i <= count; i++) {
        var user = localStorage.getItem("user" + String(i));
        user = JSON.parse(user);
        var table ='';
        table +=  createTable(user);
        document.getElementById("container_cart").innerHTML += table;
    }
}
window.onload = function() {
    if(localStorage.getItem('form')) {
        document.getElementById ('container-form').style.display = 'none';
        document.getElementById ('head').innerHTML = localStorage.getItem('str');
    }
    count = localStorage.getItem('count') || 0;
    getLS();
}

