    ///////////////////////////////////////////////////////////////////////////
    /// Styles
    ///////////////////////////////////////////////////////////////////////////

    // Control types
    #define CT_STATIC           0
    #define CT_BUTTON           1
    #define CT_EDIT             2
    #define CT_SLIDER           3
    #define CT_COMBO            4
    #define CT_LISTBOX          5
    #define CT_TOOLBOX          6
    #define CT_CHECKBOXES       7
    #define CT_PROGRESS         8
    #define CT_HTML             9
    #define CT_STATIC_SKEW      10
    #define CT_ACTIVETEXT       11
    #define CT_TREE             12
    #define CT_STRUCTURED_TEXT  13
    #define CT_CONTEXT_MENU     14
    #define CT_CONTROLS_GROUP   15
    #define CT_SHORTCUTBUTTON   16
    #define CT_XKEYDESC         40
    #define CT_XBUTTON          41
    #define CT_XLISTBOX         42
    #define CT_XSLIDER          43
    #define CT_XCOMBO           44
    #define CT_ANIMATED_TEXTURE 45
    #define CT_OBJECT           80
    #define CT_OBJECT_ZOOM      81
    #define CT_OBJECT_CONTAINER 82
    #define CT_OBJECT_CONT_ANIM 83
    #define CT_LINEBREAK        98
    #define CT_USER             99
    #define CT_MAP              100
    #define CT_MAP_MAIN         101
    #define CT_LISTNBOX         102
    #define CT_CHECKBOX         77

    // Static styles
    #define ST_POS            0x0F
    #define ST_HPOS           0x03
    #define ST_VPOS           0x0C
    #define ST_LEFT           0x00
    #define ST_RIGHT          0x01
    #define ST_CENTER         0x02
    #define ST_DOWN           0x04
    #define ST_UP             0x08
    #define ST_VCENTER        0x0C

    #define ST_TYPE           0xF0
    #define ST_SINGLE         0x00
    #define ST_MULTI          0x10
    #define ST_TITLE_BAR      0x20
    #define ST_PICTURE        0x30
    #define ST_FRAME          0x40
    #define ST_BACKGROUND     0x50
    #define ST_GROUP_BOX      0x60
    #define ST_GROUP_BOX2     0x70
    #define ST_HUD_BACKGROUND 0x80
    #define ST_TILE_PICTURE   0x90
    #define ST_WITH_RECT      0xA0
    #define ST_LINE           0xB0

    #define ST_SHADOW         0x100
    #define ST_NO_RECT        0x200
    #define ST_KEEP_ASPECT_RATIO  0x800

    #define ST_TITLE          ST_TITLE_BAR + ST_CENTER

    // Slider styles
    #define SL_DIR            0x400
    #define SL_VERT           0
    #define SL_HORZ           0x400

    #define SL_TEXTURES       0x10

    // progress bar
    #define ST_VERTICAL       0x01
    #define ST_HORIZONTAL     0

    // Listbox styles
    #define LB_TEXTURES       0x10
    #define LB_MULTI          0x20

    // Tree styles
    #define TR_SHOWROOT       1
    #define TR_AUTOCOLLAPSE   2

    // MessageBox styles
    #define MB_BUTTON_OK      1
    #define MB_BUTTON_CANCEL  2
    #define MB_BUTTON_USER    4


    ///////////////////////////////////////////////////////////////////////////
    /// Base Classes
    ///////////////////////////////////////////////////////////////////////////
class RscEdit
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {0.8784,0.8471,0.651,1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
};
class RscListBox
{
	access = 0;
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,1};
	colorSelectBackground2[] = {0.8784,0.8471,0.651,1};
	colorBackground[] = {0,0,0,1};
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	style = 16;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
	color[] = {1,1,1,1};
	period = 1.2;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscButton
{
    deletable = 0;
    fade = 0;
    access = 0;
    type = 1;
    text = "";
    colorText[] ={1,1,1,1};
    colorDisabled[] ={1,1,1,0.25};
    colorBackground[] ={0,0,0, 0.5};
    colorBackgroundDisabled[] ={0,0,0,0.5};
    colorBackgroundActive[] ={0,0,0,1};
    colorFocused[] ={0,0,0,1};
    colorShadow[] ={0,0,0,0};
    colorBorder[] ={0,0,0,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    font = "Zeppelin32";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    borderSize = 0;
	soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
};
class RscShortcutButton
{
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone
	{
		left = 0.004;
		top = 0.029;
		right = 0.004;
		bottom = 0.029;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.05;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {0.8784,0.8471,0.651,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,0.4};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 2;
	w = 0.183825;
	h = 0.104575;
	periodFocus = 1.2;
	periodOver = 0.8;
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa";
	period = 0.4;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
   soundPush[] = { "", 0, 1 };
	soundEnter[] =	{ "", 0, 1 };
	soundClick[] ={ "", 0, 1 };
	soundEscape[] ={ "", 0, 1 };
	sound[] ={ "", 0, 1 };
	
	
	
	action = "";
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	shadow = 2;
};
class RscCombo
{
	access = 0;
	type = 4;
	style = 0;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	class ScrollBar
	{
		color[] = {1,1,1,1};
		colorActive[] = {0.8784,0.8471,0.651,1};
		colorDisabled[] = {0.8784,0.8471,0.651,1};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	shadow = 0;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	color[] = {0,0,0,0.6};
	colorActive[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	font = "Zeppelin32";
	sizeEx = 0.03921;
};
class RscBackground
{
	type = 0;
	style = ST_BACKGROUND;
	shadow = 2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
	
};
class RscFrame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};
class RscStrText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	shadow = 2;
};
class RscText
{
	type = 0;
	idc = -1;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0x100; 
	font = Zeppelin32;
	SizeEx = 0.03921;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0, 0, 0, 0};
	linespacing = 1;
};
class RscPicture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
};
class RscLoadingText : RscText
{
	style = 2;
	x = 0.323532;
	y = 0.666672;
	w = 0.352944;
	h = 0.039216;
	sizeEx = 0.03921;
	colorText[] = {0.543,0.5742,0.4102,1.0};
};
class RscProgress
{
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "\ca\ui\data\loadscreen_progressbar_ca.paa";
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,1,1,1};
};
class RscProgressNotFreeze
{
	idc = -1;
	type = 45;
	style = 0;
	x = 0.022059;
	y = 0.911772;
	w = 0.029412;
	h = 0.039216;
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};
class RscPictureGUI
{
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={0.38,0.63,0.25999999,0.75};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	style="0x30 + 0x100";
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
};
class DayZ_loadingScreen
{ 
	idd = -1;
	duration = 10e10;
	fadein = 0;
	fadeout = 0;
	name = "loading screen";
	class controlsBackground
	{
		class blackBG : RscText
		{
			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,1};
		};
	};
	class controls
	{
		class Title1 : RscLoadingText
		{
			text = "$STR_LOADING"; // "Loading" text in the middle of the screen
		};
		class CA_Progress : RscProgress // progress bar, has to have idc 104
		{
			idc = 104;
			type = 8; // CT_PROGRESS
			style = 0; // ST_SINGLE
			texture = "\ca\ui\data\loadscreen_progressbar_ca.paa";
		};
		class CA_Progress2 : RscProgressNotFreeze // progress bar that will go reverse
		{
			idc = 103;
		};
		class Name2: RscText // the text on the top-left
		{
			idc = 101;
			x = 0.05;
			y = 0.029412;
			w = 0.9;
			h = 0.04902;
			text = "";
			sizeEx = 0.05;
			colorText[] = {0.543,0.5742,0.4102,1.0};
		};
	};
};
class RscShortcutButtonMain
{
       idc = -1;
       style = 0;
       default = 0;
       w = 0.313726;
       h = 0.104575;
       color[] =
       {
          1,
          1,
          1,
          1
       };
       colorDisabled[] =
       {
          1,
          1,
          1,
          0.25
       };
       class HitZone
       {
          left = 0;
          top = 0;
          right = 0;
          bottom = 0;
       };
       class ShortcutPos
       {
          left = 0.0145;
          top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
          w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
          h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
       };
       class TextPos
       {
          left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
          top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
          right = 0.005;
          bottom = 0;
       };
       period = 0.5;
       font = "Zeppelin32";
       size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
       sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
       text = "";
       action = "";
       class Attributes
       {
          font = "Zeppelin32";
          color = "#E5E5E5";
          align = "left";
          shadow = "false";
       };
       class AttributesImage
       {
          font = "Zeppelin32";
          color = "#E5E5E5";
          align = "false";
       };
    };

class RscSlider
{
       deletable = 0;
       fade = 0;
       access = 0;
       type = 3;
       style = 1024;
       w = 0.3;
       color[] =
       {
          1,
          1,
          1,
          0.8
       };
       colorActive[] =
       {
          1,
          1,
          1,
          1
       };
       shadow = 0;
       h = 0.025;
    };
class IGUIBack
{
       type = 0;
       idc = 124;
       style = 128;
       text = "";
       colorText[] =
       {
          0,
          0,
          0,
          0
       };
       font = "Zeppelin32";
       sizeEx = 0;
       shadow = 0;
       x = 0.1;
       y = 0.1;
       w = 0.1;
       h = 0.1;
       colorbackground[] =
       {
          "(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
          "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
          "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
          "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
       };
    };
class RscCheckBox
{
       idc = -1;
       type = 77;
       style = 0;
       checked = 0;
       x = "0.375 * safezoneW + safezoneX";
       y = "0.36 * safezoneH + safezoneY";
       w = "0.025 * safezoneW";
       h = "0.04 * safezoneH";
       color[] =
       {
          1,
          1,
          1,
          0.7
       };
       colorFocused[] =
       {
          1,
          1,
          1,
          1
       };
       colorHover[] =
       {
          1,
          1,
          1,
          1
       };
       colorPressed[] =
       {
          1,
          1,
          1,
          1
       };
       colorDisabled[] =
       {
          1,
          1,
          1,
          0.2
       };
       colorBackground[] =
       {
          0,
          0,
          0,
          0
       };
       colorBackgroundFocused[] =
       {
          0,
          0,
          0,
          0
       };
       colorBackgroundHover[] =
       {
          0,
          0,
          0,
          0
       };
       colorBackgroundPressed[] =
       {
          0,
          0,
          0,
          0
       };
       colorBackgroundDisabled[] =
       {
          0,
          0,
          0,
          0
       };
       tooltipColorText[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorBox[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorShade[] =
       {
          0,
          0,
          0,
          0.65
       };
       soundEnter[] =
       {
          "",
          0.1,
          1
       };
       soundPush[] =
       {
          "",
          0.1,
          1
       };
       soundClick[] =
       {
          "",
          0.1,
          1
       };
       soundEscape[] =
       {
          "",
          0.1,
          1
       };
    };
class RscTextCheckBox
{
       idc = -1;
       type = 7;
       style = 0;
       x = "0.375 * safezoneW + safezoneX";
       y = "0.36 * safezoneH + safezoneY";
       w = "0.025 * safezoneW";
       h = "0.04 * safezoneH";
       colorText[] =
       {
          1,
          0,
          0,
          1
       };
       color[] =
       {
          0,
          0,
          0,
          0
       };
       colorBackground[] =
       {
          0,
          0,
          1,
          1
       };
       colorTextSelect[] =
       {
          0,
          0.8,
          0,
          1
       };
       colorSelectedBg[] =
       {
          "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
          "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
          "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
          1
       };
       colorSelect[] =
       {
          0,
          0,
          0,
          1
       };
       colorTextDisable[] =
       {
          0.4,
          0.4,
          0.4,
          1
       };
       colorDisable[] =
       {
          0.4,
          0.4,
          0.4,
          1
       };
       tooltipColorText[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorBox[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorShade[] =
       {
          0,
          0,
          0,
          0.65
       };
       font = "Zeppelin32";
       sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
       rows = 1;
       columns = 1;
       strings[] =
       {
          "UNCHECKED"
       };
       checked_strings[] =
       {
          "CHECKED"
       };
    };
class RscButtonMenu
{
       idc = -1;
       type = 16;
       style = "0x02 + 0xC0";
       default = 0;
       shadow = 0;
       x = 0;
       y = 0;
       w = 0.095589;
       h = 0.039216;
       animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
       animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
       animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
       animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
       animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
       animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
       colorBackground[] =
       {
          0,
          0,
          0,
          0.8
       };
       colorBackgroundFocused[] =
       {
          1,
          1,
          1,
          1
       };
       colorBackground2[] =
       {
          0.75,
          0.75,
          0.75,
          1
       };
       color[] =
       {
          1,
          1,
          1,
          1
       };
       colorFocused[] =
       {
          0,
          0,
          0,
          1
       };
       color2[] =
       {
          0,
          0,
          0,
          1
       };
       colorText[] =
       {
          1,
          1,
          1,
          1
       };
       colorDisabled[] =
       {
          1,
          1,
          1,
          0.25
       };
       period = 1.2;
       periodFocus = 1.2;
       periodOver = 1.2;
       size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
       sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
       tooltipColorText[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorBox[] =
       {
          1,
          1,
          1,
          1
       };
       tooltipColorShade[] =
       {
          0,
          0,
          0,
          0.65
       };
       class TextPos
       {
          left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
          top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
          right = 0.005;
          bottom = 0;
       };
       class Attributes
       {
          font = "Zeppelin32";
          color = "#E5E5E5";
          align = "left";
          shadow = "false";
       };
       class ShortcutPos
       {
          left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
          top = 0.005;
          w = 0.0225;
          h = 0.03;
       };
    };
class RscButtonMenuOK
{
       idc = 1;
       shortcuts[] =
       {
          "0x00050000 + 0",
          28,
          57,
          156
       };
       default = 1;
       text = "OK";
    };
class RscButtonMenuCancel
{
       idc = 2;
       shortcuts[] =
       {
          "0x00050000 + 1"
       };
       text = "Abbrechen";
    };
class RscControlsGroup
{
       deletable = 0;
       fade = 0;
       class VScrollbar
       {
          color[] =
          {
             1,
             1,
             1,
             1
          };
          width = 0.021;
          autoScrollEnabled = 1;
       };
       class HScrollbar
       {
          color[] =
          {
             1,
             1,
             1,
             1
          };
          height = 0.028;
       };
       class Controls
       {
       };
       type = 15;
       idc = -1;
       x = 0;
       y = 0;
       w = 1;
       h = 1;
       shadow = 0;
       style = 16;
};