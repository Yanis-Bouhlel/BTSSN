function login() {
    var inputs = document.getElementsByTagName("input");
    var verif = false;

    for (let i = 0; i < 4; i++) {
        if (inputs[i].value == "") {
            verif = false;
            inputs[i].style.borderColor = "red"
            if (i == 4)
        {
            check.style.Color = "red"
        }
        }
        else {
            inputs[i].style.borderColor = "green";
            verif = true;
        }
        
    }
}