# FlymaOS lightdm greeter

## Dependencies

* sudo apt install liblightdm-qt5-3-dev

## How to enable flyma-greeter

Update or insert in(to) your `/etc/lightdm/lightdm.conf`, in the `SeatDefaults section`, this line:

`greeter-session=flyma-greeter`

## Configure qt-lightdm-greeter

The file `/etc/lightdm/flyma-greeter.conf` allows for a few configurations of flyma-greeter (background-image, positioning of loginform). The configuration options are documented in that file.

