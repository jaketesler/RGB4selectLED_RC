Arduino RGB 16-mode LED Switcher
================

Startup Options:
Switch 1:
	
* Off: Normal startup
* On: Bypass all startup options (except testing)

Switch 2:

* Off:    Normal SMB startup
* On:   Short SMB startup

Switch 3:

* Off:    Normal RGB Test startup
* On:   Short RGB Test startup

Switch 4:

* Off:    Normal startup
* On:   Crash System on Boot (reset required)

\----------------

Light Sequences:

1111
<br>SMB Player Loop


0000
<br>RGB Fade U+D delay (potent or 5)


1000
<br>R-G-B-RGB
<br>delay 500


0100
<br>R-RG-G-GB-B-BR
<br>delay 500


1100
<br>Fade through all colors
<br>delay 1


0010
<br>All on - All OFF
<br>delay 500


1010
<br>R-RG-RGB-G-BG-RGB-B-RB-RGB 
<br>delay 500


0110
<br>OFF-R-RG-RGB-RG-R-
<br>OFF-G-GB-RGB-GB-G-
<br>OFF-B-RB-RGB-RB-B-
<br>delay between 150
<br>delay OFF 250


1110
<br>R(255)-RGB(55)-
<br>G(255)-RGB(55)-
<br>B(255)-RGB(55)-
<br>G(255)-RGB(55)-
<br>B(255)-RGB(55)-
<br>G(255)-RGB(55)-
<br>R(255)-RGB(55)-
<br>RGB(255)-RGB(55)-
<br>short delay 225
<br>long delay 950



1001
<br>R
<br>delay 1000

0101
<br>G
<br>delay 1000

0011
<br>B
<br>delay 1000

0001
<br>RGB
<br>delay 1000

1011
<br>R-G-B 
<br>delay 500


0111
<br>OFF-R-RG-RGB-G-BG-RGB-B-RB-RGB-
<br>OFF-RGB-OFF-RGB-OFF-RGB-
<br>delay 500, 125/250


1101
<br>R-OFF (4x) 125
<br>G-OFF (4x) 125
<br>B-OFF (4x) 125
<br>R-G-B- (4x) 83.3
<br>OFF 250


Red Shield Button
<br>SMB Player

---- removed ----
<br>*** settings ***
<br>Adjust potentiometer to modify settings
<br>(hit button to confirm)

0001 = DELAY SETTINGS for 0000
