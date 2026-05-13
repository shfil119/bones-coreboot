-- SPDX-License-Identifier: GPL-2.0-or-later

with HW.GFX.GMA;
with HW.GFX.GMA.Display_Probing;

use HW.GFX.GMA;
use HW.GFX.GMA.Display_Probing;

private package GMA.Mainboard is

-- Yes, HDMI2

ports : constant Port_List :=
     (HDMI2,
      Analog,
      others => Disabled);

end GMA.Mainboard;
