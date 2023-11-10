<?php
    $empleados = [
        1 => [
            'Empleado' => 'Juan Pérez',
            'Puesto' => 'Gerente',
            'FechaContratacion' => '2022-01-15',
            'ID_Departamento' => 1,
            'ID_Sucursal' => 3
        ],
        2 => [
            'Empleado' => 'María González',
            'Puesto' => 'Analista de Ventas',
            'FechaContratacion' => '2022-03-10',
            'ID_Departamento' => 2,
            'ID_Sucursal' => 1
        ],
        3 => [
            'Empleado' => 'Carlos Rodríguez',
            'Puesto' => 'Desarrollador Web',
            'FechaContratacion' => '2022-02-05',
            'ID_Departamento' => 3,
            'ID_Sucursal' => 2
        ],
        4 => [
            'Empleado' => 'Ana Martínez',
            'Puesto' => 'Contadora',
            'FechaContratacion' => '2022-04-20',
            'ID_Departamento' => 1,
            'ID_Sucursal' => 1
        ],
        5 => [
            'Empleado' => 'Pedro López',
            'Puesto' => 'Diseñador Gráfico',
            'FechaContratacion' => '2022-03-15',
            'ID_Departamento' => 2,
            'ID_Sucursal' => 2
        ],
        6 => [
            'Empleado' => 'Laura Sánchez',
            'Puesto' => 'Analista de Marketing',
            'FechaContratacion' => '2022-05-10',
            'ID_Departamento' => 3,
            'ID_Sucursal' => 3
        ],
        7 => [
            'Empleado' => 'Javier García',
            'Puesto' => 'Recursos Humanos',
            'FechaContratacion' => '2022-06-01',
            'ID_Departamento' => 1,
            'ID_Sucursal' => 1
        ],
        8 => [
            'Empleado' => 'Isabel Fernández',
            'Puesto' => 'Analista de Datos',
            'FechaContratacion' => '2022-03-25',
            'ID_Departamento' => 2,
            'ID_Sucursal' => 2
        ],
        9 => [
            'Empleado' => 'Luis Ramírez',
            'Puesto' => 'Ingeniero de Software',
            'FechaContratacion' => '2022-01-30',
            'ID_Departamento' => 3,
            'ID_Sucursal' => 3
        ],
        10 => [
            'Empleado' => 'Carmen Torres',
            'Puesto' => 'Gerente de Ventas',
            'FechaContratacion' => '2022-04-05',
            'ID_Departamento' => 1,
            'ID_Sucursal' => 1
        ],
    ];

    $departamentos = [
        1 => [
            'Nombre' => 'Recursos Humanos',
            'JefeDepartamento' => 'Ana López',
            'Ubicacion' => 'Edificio Principal'
        ],
        2 => [
            'Nombre' => 'Ventas',
            'JefeDepartamento' => 'Carlos Rodríguez',
            'Ubicacion' => 'Edificio de Ventas'
        ],
        3 => [
            'Nombre' => 'Desarrollo de Software',
            'JefeDepartamento' => 'Luis Martínez',
            'Ubicacion' => 'Centro de Desarrollo'
        ]
    ];

    $sucursales = [
        1 => [
            'Nombre' => 'Sucursal Central',
            'Direccion' => 'Avenida Principal 123',
            'Ciudad' => 'Ciudad Principal'
        ],
        2 => [
            'Nombre' => 'Sucursal Norte',
            'Direccion' => 'Calle Norte 456',
            'Ciudad' => 'Ciudad del Norte'
        ],
        3 => [
            'Nombre' => 'Sucursal Sur',
            'Direccion' => 'Calle Sur 789',
            'Ciudad' => 'Ciudad del Sur'
        ]
    ];
?>