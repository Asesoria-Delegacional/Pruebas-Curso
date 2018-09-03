<?php


function saludo($_mensaje){
  echo "<br />Hola ".$_mensaje. " bienvenido";
}


$miMensaje = "Juan Manuel";

saludo($miMensaje);
saludo("Jose Miguel");

?>
