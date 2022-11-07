<?php
//On prend l'adresse de la page à laquelle on enlève le \ du début (1er caractère) :
$page = substr($_SERVER['PHP_SELF'], 1);
// On stocke dans une variable le timestamp qu'il était il y a 5 minutes :
$timestamp_5min = time() - (60 * 5); // 60 * 5 = nombre de secondes écoulées en 5 minutes
//On commence par virer les entrées trop vieilles (+ de 5 minutes)
mysqli_query($connexion, 'DELETE FROM connectes WHERE timestamp < ' . $timestamp_5min);

$retour = mysqli_query($connexion, 'SELECT COUNT(*) AS nb_connectes FROM connectes WHERE ip=\'' . ip2long($_SERVER['REMOTE_ADDR']) . '\'');
$donnees = mysqli_fetch_assoc($retour); //On regarde si le visiteur est déjà dans la table

if ($donnees['nb_connectes'] == 0) // Si il n'y est pas, on l'ajoute
{
    mysqli_query($connexion, 'INSERT INTO connectes(ip, timestamp, page) VALUES(\'' . ip2long($_SERVER['REMOTE_ADDR']) . '\', NOW()), \'' . $page . '\'');
}
else // Sinon, on remet le décompte de 5 minutes à 0
{
    mysqli_query($connexion, 'UPDATE connectes SET timestamp=NOW(), page=\'' . $page . '\' WHERE ip=\'' . ip2long($_SERVER['REMOTE_ADDR']) . '\'');
}

//Enfin, on calcule le nombre total d'entrées puis on l'affiche !
$retour = mysqli_query($connexion, 'SELECT COUNT(*) AS nb_connectes FROM connectes');
$donnees = mysqli_fetch_assoc($retour);

$visiteurs_connectes = $donnees['nb_connectes'];
// Affichage
echo 'Visiteurs connectés : <strong>' . $donnees['nb_connectes'] . '</strong><br/>';

?>