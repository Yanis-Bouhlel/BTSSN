document.getElementById("contact").addEventListener("submit", function(e) {
	var erreur;
	var inputs = document.getElementsByTagName("input");//variable inputs est toute les balises input
	var news = document.getElementById("newsletter");//variable news est l'identifiant newsletter
	var adresse = document.getElementById("adresse");//variable news est l'identifiant adresse
	var civil = document.getElementById("civil");//variable news est l'identifiant civil
	console.log(inputs);//debug

	function blink (Obj){//fonction nommé blink avec paramétre Obj que l'on pourra remplacer par la suite
			if (Obj.style.borderColor != "#DF6C6C") {//si la couleur de bordure de "Obj" != à rouge 
				Obj.style.borderColor = "#DF6C6C";//On met la couleur en rouge 
			}
			else
				{Obj.style.borderColor = "#C3C3C3";}//sinon on la met en gris
		}

	if (news.checked == false) { //mail obligatoire que si la Chechbox est coché 
		var test = inputs.length-3;
		console.log(test);//debug
		}
		else {
			test = inputs.length;
			console.log(test);//debug
		}

	if (civil.value == "-"){//si la valeur du select est "-"
		erreur="Veuillez renseigner tous les champs";// erreur = au string "Veuillez renseigner tous les champs"
		civil.style.borderColor = "#DF6C6C";//Bordure en rouge
	}else {
			civil.style.borderColor = "#C3C3C3";// Bordure en gris de l'id civil
		}

	if (!adresse.value){//si aucune valeur dans textarea 
		erreur="Veuillez renseigner tous les champs";// erreur = au string "Veuillez renseigner tous les champs"
		adresse.style.borderColor = "#DF6C6C";//Bordure en rouge
	}else {
			adresse.style.borderColor = "#C3C3C3";// Bordure en gris de l'id adresse
		}

	for (var i=0 ; i < test; i++) {

		if (!inputs[i].value){//si aucune valeur dans inputs[i]
			console.log(inputsI)
			erreur="Veuillez renseigner tous les champs";// erreur = au string "Veuillez renseigner tous les champs"
			//inputs[i].style.borderColor = "#DF6C6C";//Bordure en rouge pour les inputs sans valeur
			setInterval(function ()){//fonction nommé blink avec paramétre Obj que l'on pourra remplacer par la suite
			if (inputs[i].style.borderColor != "#DF6C6C") {//si la couleur de bordure de "Obj" != à rouge 
				inputs[i].style.borderColor = "#DF6C6C";//On met la couleur en rouge 
			}
			else
				{inputs[i].style.borderColor = "#C3C3C3";}//sinon on la met en gris
		},500);//Execution de la fonction blink toute les 0,5 secondes (marche pas)
		}else {
			inputs[i].style.borderColor = "#C3C3C3";// Bordure en gris de tout les inputs avec une valeur
		}
	}

	if(erreur) {
		e.preventDefault();//empêche de recherger la page
		document.getElementById("erreur").innerHTML = erreur;//paragraphe aves l'id erreur prend la valeur de la variable erreur
	} else {
		alert("Formulaire envoyé !")//Pop-up indiquant que le formulaire est envoyé
	}
});

