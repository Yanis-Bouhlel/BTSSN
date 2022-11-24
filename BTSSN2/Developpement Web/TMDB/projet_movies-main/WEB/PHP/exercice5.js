var div_root = document.querySelector('#root');

let tab1 = [];
let tab2 = [];

    alert("initialisation de tab1.")
    do{
        val =parseInt( prompt("saisissez un nombre > 0"));
        if (val>0) tab1.push(val);
    }while(val > 0)

    alert("initialisation de tab2.")
    do{
        val =parseInt( prompt("saisissez un nombre > 0"));
        if (val>0) tab2.push(val);
    }while(val > 0)

    console.log(tab1);

    $.ajax({
        url: "main.php",
        method: "GET",
        data: {t1:tab1, t2:tab2},
        dataType: "json",
        success: function(data){
            console.log(data);
            let p = document.createElement('p');
            div_root.appendChild(p);
            p.textContent = `${data}`;
            div_root.style.display="";

        }
    });