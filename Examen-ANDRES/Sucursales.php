<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php include "funciones.inc"?>
</head>
<body>
    <div>
        <form action="EmpleadosSucursal.php" method="POST" class="text-center">
            <select name='cboSucursal' id="cboSucursal">
                <option value='-1'>--Opciones--</option>
                <?php
                foreach (f_todosSucursales() as $codSucursal => $datosS) {
                    echo "<option value='".$codSucursal ."'>".f_nombreSucursal($codSucursal)."</option>";
                }
                ?>
            </select>
            <input type="submit" value="Mostrar empleados" name="submit">
        </form>
    </div>
</body>
</html>