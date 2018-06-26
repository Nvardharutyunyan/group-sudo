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
}

function info_cart(form_data) {
    var table ="<table ><tr><td> Name: </td> <td>";
    table += form_data["name"].value +
            "</td></tr><tr><td>Surname: </td> <td>"+ form_data["surname"].value +
            "</td></tr><tr><td>Adress: </td> <td>"+ form_data["adress"].value +
            "</td></tr><tr><td>Country: </td> <td>"+ form_data["country"].value +
            "</td></tr><tr><td>Phone: </td> <td>"+ form_data["phone"].value + 
            "</td></tr><tr><td>E-mail: </td> <td>"+ form_data["email"].value + 
            "</td></tr> </table>";
    document.getElementById("container_cart").innerHTML += table;
    for (var i = 0; i < 6; i++) {
        form_data[i].value = "";  
    };
}

