<?php
    $id = $_GET['id'];
    $data = file_get_contents("courses.json");
    $val = json_decode($data);
    echo json_encode($val[$id]);
?>