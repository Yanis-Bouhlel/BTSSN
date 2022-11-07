const btnToggle = document.querySelector('.btn-toggle');// on declare la variable btnToggle representant notre class

btnToggle.addEventListener('click', () => {//on declare un evenement par exemple "lorsqu'on click"
    const body = document.body;

    if (body.classList.contains('dark')) { //de l'algo comme en cpp donc si on est en mode light alors le bouton change de nom et la paye est dark

        body.classList.add('light')
        body.classList.remove('dark')
        btnToggle.innerHTML = "Go Dark"
    }
    else if (body.classList.contains('light')) {// sinon inversement si c'est dark alors bouton est go light 

        body.classList.add('dark')
        body.classList.remove('light')
        btnToggle.innerHTML = "Go Light"
    }
})


function login() {
    var inputs = document.getElementsByTagName("input");
    var text = document.getElementById("valid");
    const arobaze = /[@]/g;
    const miniscule = /[a-z]/g;
    const nameMail = /[gmail][outlook]/g;
    const num = /[1-9]/g;
    const Ndomaine = /[.fr][.com][.org]/g;
    const point = /[.]/g;
    var verifMail = false;
    var verifPass = false;
    var verif = false;
    mail = inputs[0] ; 
    password = inputs[1];

    if (mail.value.match(miniscule)) //l'adresse doit comporter des miniscule
    {
        if (mail.value.match(arobaze)) //l'adresse doit comporter un @
        {
            if (mail.value.match(miniscule)) //l'adresse doit comporter des Nmail
            {
                if (mail.value.match(Ndomaine)) 
                {
                    mail.style.color = "white" ; 
                    mail.style.borderColor = "green";
                    verifMail = true ; 
                }
            }
        }
    }

    else 
    {
        mail.style.borderColor = "red";
        verifMail = false ; 
    }


    if (password.value.match(miniscule)) 
    {
        if (password.value.match(num)) 
        {
            if (password.value.match(point)) 
            {
                password.style.borderColor = "green";
                verifPass = true ;
            }
        }
    }

    else 
    {
        password.style.borderColor = "red";
        verifPass = false ; 
    }

    if (verifMail == true && verifPass == true)
    {
        verif = true;
        text.innerHTML = "";
    }
    else 
    {
        verif = false ; 
        text.style.color = "red" ; 
        text.innerHTML = "Veuillez réessayer ! ";
    }
}
