document.getElementById("contact").addEventListener("submit", function (e) {

	var erreur = true;
	var inputs = document.getElementsByTagName("input");//variable inputs est toute les balises input
	var news = document.getElementById("newsletter");//variable news est l'identifiant newsletter
	var adresse = document.getElementById("adresse");//variable news est l'identifiant adresse
	var civil = document.getElementById("civil");//variable news est l'identifiant civil
	var test;

	setInterval(function () {

		if (civil.value == "-") {
			erreur = true;
			if (civil.style.border != "1px solid grey") {
				civil.style.border = "1px solid grey";
			}
			else
				civil.style.border = "1px solid red";
		}
		else {
			civil.style.borderColor = "#C3C3C3";
			erreur = false;
		}

		if (news.checked == false) {
			test = inputs.length - 3;
		}
		else
			test = inputs.length;


		if (!adresse.value) {
			erreur = true;
			if (adresse.style.border != "1px solid grey") {
				adresse.style.border = "1px solid grey";
			}
			else
				adresse.style.border = "1px solid red";
		}
		else {
			adresse.style.borderColor = "#C3C3C3";
			erreur = false;
		}


		for (let i = 0; i < test; i++) {
			if (!inputs[i].value) {
				erreur = true;

				if (inputs[i].style.border != "1px solid grey") {
					inputs[i].style.border = "1px solid grey";
				}
				else
					inputs[i].style.border = "1px solid red"
			}
			else {
				inputs[i].style.borderColor = "#C3C3C3";
				erreur = false;
			}
		}
	}, 800);
	if (erreur == true) {
		e.preventDefault();//empêche de recherger la page
		document.getElementById("erreur").style.display = "inline-block";
	}
	else {
		document.getElementById("erreur").style.display = "none";
		alert("Formulaire envoyé !")//Pop-up indiquant que le formulaire est envoyé
		break;
	}
});
