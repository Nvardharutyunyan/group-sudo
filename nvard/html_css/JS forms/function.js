function to_realize (F) { 
    var gender; 
    if(document.getElementById('gender_Male').checked) {
        gender = "Mr.";
    }else if(document.getElementById('gender_Female').checked) {
        gender = "Mrs.";
    }
    var str = [ gender, F ['Name'].value,F ['Lastname'].value ].join('  ');
    mt = document.getElementById ('tool');
    mt.innerHTML = str;
    mc   = document.getElementById ('modal');
    mc.style.display = 'block';
    form = document.getElementById ('form1');
    form.style.display = 'none';
}
var span = document.getElementsByClassName("continue")[0];
    span.onclick = function() {
    document.getElementById ('modal').style.color.red;
    fromyou = document.getElementById ('fromyou');
    fromyou.style.display = 'block';
}
function foo(G) {
    var info = [[],[],[],[],[],[]].join('<br>');
    
}
