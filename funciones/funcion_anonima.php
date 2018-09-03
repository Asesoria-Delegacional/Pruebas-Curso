<?php

$variable = function($nombre){
    return $nombre;
};

echo $variable("charles")."<br />";
echo "<hr />";

print preg_replace_callback('~-([a-z])~', function($coincidencia){
    return strtoupper($coincidencia[1]);
}, "-hola-mundo");


 ?>
