# PandaOS lightdm greeter

## Dependencies

* sudo apt install liblightdm-qt5-3-dev

## How to enable flyma-greeter

Update or insert in(to) your `/etc/lightdm/lightdm.conf`, in the `SeatDefaults section`, this line:

`greeter-session=panda-greeter`

## Configure qt-lightdm-greeter

The file `/etc/lightdm/panda-greeter.conf` allows for a few configurations of panda-greeter (background-image, positioning of loginform). The configuration options are documented in that file.

