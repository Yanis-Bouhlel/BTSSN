<?php
session_start();
$bdd = new PDO('mysql:host=localhost;dbname=formulaire;charset=utf8;', 'root', '');
if(isset($_POST['envoi'])){
    if(!empty($_POST['pseudo']) AND !empty($_POST['email']) AND !empty($_POST['mdp'])){
        $pseudo = htmlspecialchars($_POST['pseudo']);
        $email = htmlspecialchars($_POST['email']);
        $mdp = sha1($_POST['mdp']);
        $insertUser = $bdd->prepare('INSERT INTO users(pseudo, email, mdp)VALUES(?,?,?)');
        $insertUser->execute(array($pseudo, $email, $mdp));

        $recupUser = $bdd->prepare('SELECT * FROM users WHERE pseudo = ? AND email = ? AND mdp = ?');
        $recupUser->execute(array($pseudo, $email, $mdp));

        if($recupUser->rowCount() > 0){
            $_SESSION['pseudo'] = $pseudo;
            $_SESSION['email'] = $email;
            $_SESSION['mdp'] = $mdp;
            $_SESSION['id'] = $recupUser->fetch()['id'];
        }

        echo $_SESSION['id'];
        
    }else{
        echo"Veuillez compléter tous les champs...";
    }
}
?>
<!-- <!DOCTYPE html>
<html>



<body>

    <form method="POST" action="" text-align="center">
        <input type="text" name="pseudo" autocomplete="off">
        <br>
        <input type="password" name="mdp" autocomplete="off">
        <br><br>
        <input type="submit" name="envoi">
    </form>

</body>

</html> -->

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, shrink-to-fit=no">
    <title>Inscription</title>
    <link rel="stylesheet" href="../assets/bootstrap/css/bootstrap.min.css">
    <link rel="stylesheet" href="../assets/css/Contact-Form-Clean.css">
    <link rel="stylesheet" href="../assets/css/styles.css">
    <!-- <script src="../assets/js/jquery.min.js"></script>
    <script src="../assets/bootstrap/js/bootstrap.min.js"></script>
    <script src="../assets/js/myscript.js"></script>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

    <script src="../ajax.js"></script>
    <script src="../ConnexionTest.js"></script> -->
</head>
<body id="body">
    <div class="formulaire">
        <div class="contact-clean"><img src="../assets/image/logoDonuts.jpg" class="logoform">
            <form method="post" id="myForm">
                <div id="toutLeForm">
                    <h2 class="text-center">INSCRIVEZ-VOUS&nbsp;&nbsp;</h2>
                    <div class="form-group">
                        <p style="color: white;">Pseudo :</p>
                        <input class="form-control" type="prenom" name="pseudo" autocomplete="off" id="prenom">
                    </div>
                    <div class="form-group">
                        <p style="color: white;">Email :</p><input class="form-control" type="email" name="email"
                            placeholder="exemple@email.com" id="email">
                    </div>
                    <div class="form-group">
                        <p style="color: white;">Mot de passe :</p>
                        <input class="form-control" type="password" name="mdp" autocomplete="off" id="password">
                        <!--<small class="text-danger invisible" name="message_erreur" id="message_erreur">Veuillez entrer un mot de passe de longueur minimum 8 caractères.</small>-->
                        <small id="message_erreur2"> </small>
                    </div>
                    <!-- <div class="form-group">
                        <p style="color: white;">Confirmation du mot de passe :</p><input class="form-control"
                            type="password" name="password" id="Vpassword">
                        <!-- <small class="text-danger invisible" name="message_erreur" id="message_erreur">Veuillez entrer un mot de passe de longueur minimum 8 caractères.</small>
                        <small
                            id="message_erreur3"> </small>
                    </div> -->
                    <!-- <div class="form-check"><input class="form-check-input" type="checkbox" id="formCheck-1"><label
                            class="form-check-label" for="formCheck-1" id="i_agree">J accepte les conditions d
                            utilisations</label></div> -->
                        <!-- <button id="send_butt" class="btn btn-primary" type="button"
                        onclick="verifierFormulaire()">CONTINUER</button> -->
                        <input type="submit" name="envoi" id="send_butt" class="btn btn-primary" value="CONTINUER">
                    <!-- <label>Vous posseder déjà un compte connectez-vous</label><button id="send_butt" class="btn btn-primary" type="button" onclick="ChangeDOM()">Connexion</button> -->
                    <div class="Connectez-vous">
                        <!-- <a href="index.php" style="text-align:center;">Connectez-vous</a> -->
                        <p class="p1" id="p1" style="color:white;">Vous possédez un compte ? <a href="index.php">Connectez-vous</a></p>
                        <!-- <p class="p1" id="p1" style="color:white;">Votre inscription est valider ! <a
                                href="index.php">Connectez-vous</a></p> -->
                    </div>
                </div>
        </div>
        </form>
    </div>
    </div>
</body>
</html>