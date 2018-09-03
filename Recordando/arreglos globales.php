

<?php

$nombre = "juan";
$apellido = "Badillo";

function saludo($nombre, $ape){
  echo "<br />Hola ".$nombre." ".$ape;
}

saludo($nombre, $apellido);

echo "<br /><br />Usando arreglo super global '\$SERVER[]'\<br />";

echo "<br />".$_SERVER["PHP_SELF"];
echo "<br />".$_SERVER["SERVER_NAME"];
echo "<br />".$_SERVER["HTTP_REFERER"];
echo "<br />".$_SERVER["SCRIPT_NAME"];
echo "<br />".$_SERVER["HTTP_USER_AGENT"];

 ?>
