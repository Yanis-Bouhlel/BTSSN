<?php
$mail=$_GET["email"];
$pass=$_GET["password"];

$mailS=0;
$Sfinal=0;

$ligne = 0;
$file = ' ../js/account.json ';
$data = file_get_contents($file);
$obj = json_decode($data);
 echo $obj ;




$myarray = array("messageAccount"=>array("status_id"=>"$Sfinal","email"=>"$mail"));
    echo json_encode($myarray);



    $tableau=array($mail,$pass);

       /* $header="MIME-Version: 1-0\r\n";
        $header.='From:"webminiprojet.com"<support@webminiprojet.com>'."\n";
        $header.='Content-Type:text/html; charset="utf-8"'."\n";
        $header.='Content-Transfer-Encoding: 8bit';
         $msg="<html>
               <head>
               </head>
               <body>
                   <h1>Vérification !!!<h1/>
               </body>
               </html>";
        mail($mail,"Vérification",$msg, $header);//envoie du mail a l'adresse enregistrer*/

?>

