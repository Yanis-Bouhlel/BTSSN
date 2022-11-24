<?php
session_start();
$bdd = new PDO('mysql:host=localhost;dbname=formulaire;charset=utf8;', 'root', '');
if(isset($_POST['envoi'])){
    if(!empty($_POST['pseudo']) AND !empty($_POST['mdp'])){
        $pseudo = htmlspecialchars($_POST['pseudo']);
        // $email = htmlspecialchars($_POST['email']);
        $mdp = sha1($_POST['mdp']);

        $recupUser = $bdd->prepare('SELECT * FROM users WHERE pseudo = ? AND mdp = ?');
        $recupUser->execute(array($pseudo, $mdp));

        if($recupUser->rowCount() > 0){
            $_SESSION['pseudo'] = $pseudo;
            // $_SESSION['email'] = $email;
            $_SESSION['mdp'] = $mdp;
            $_SESSION['id'] = $recupUser->fetch()['id'];
            header('Location: Movies.php');
            // header('Location: Profil.php');
        }else{
            echo"Votre pseudo mot de passe ou email est incorrect";
        }
    }else{
        echo"Veuillez compléter tous les champs...";
    }
}
?>
<!-- <!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Connexion</title>
</head>
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
    <title>Connexion</title>
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
        <div class="contact-clean">
            <img src="../assets/image/logoDonuts.jpg" class="logoform">
            <form method="POST" action="" id="myForm">
                <div id="toutLeForm">
                    <h2 class="text-center">CONNECTEZ-VOUS&nbsp;&nbsp;</h2>
                    <div id="messageCo"></div>
                    <div class="form-group">
                        <p style="color: white;">Pseudo :</p>
                        <input class="form-control" type="text" name="pseudo" autocomplete="off">
                    </div>
                    <!-- <div class="form-group">
                        <p style="color: white;">Email :</p>
                        <input class="form-control" type="email" name="email" autocomplete="off">
                    </div> -->
                    <div class="form-group">
                        <p style="color: white;">Mot de passe :</p>
                        <input class="form-control" type="password" name="mdp" id="password" autocomplete="off">
                    </div>
                    <!-- <button id="send_bouton" class="btn btn-primary" type="button"
                        onclick="ConnexionTest()">Connexion</button> -->
                    <input type="submit" name="envoi" id="send_bouton" class="btn btn-primary" value="CONNEXION">
                    <div id="loginHere"></div>
                </div>
                <br>
                <br>
                <p class="text-center" style="color: white;">Nouveau sur The Donuts Movie ? <a href="inscription.php">Sinscrire</a> &nbsp;&nbsp;</p>
        </div>
        </form>
    </div>

    </div>
    </div>

    <!-- <script src="../script.js"></script> -->
</body>

</html>