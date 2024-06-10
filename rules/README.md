Paso 1
Crear un archivo en el siguiente directorio
/etc/udev/rules.d/99-usb.rules:

Paso 2
colocar las siguientes lineas en el archivo
#RoboClaw30A
SUBSYSTEM=="tty", ATTRS{idVendor}=="03eb", ATTRS{idProduct}=="2404", ATTRS{product}=="USB Roboclaw 2x30A", MODE="0666", SYMLINK+="FestinoRC30"
#RoboClaw15A
SUBSYSTEM=="tty", ATTRS{idVendor}=="03eb", ATTRS{idProduct}=="2404", ATTRS{product}=="USB Roboclaw 2x15A", MODE="0666", SYMLINK+="FestinoRC15"

Faltaria agregar un rule al hokuyo

Paso 3
Guardar el archivo y ejecutar el siguiente comando

sudo systemctl restart udev

Paso 4
Desconectar y reconectar los USB de la roboclaw y ejecutar ls /dev
para verificar que aparecen los dispositivos ruleados