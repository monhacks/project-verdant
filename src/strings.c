#include "global.h"
#include "strings.h"
#include "battle_pyramid_bag.h"
#include "item_menu.h"

ALIGNED(4)
const u8 gText_ExpandedPlaceholder_Empty[] = _("");
const u8 gText_ExpandedPlaceholder_Kun[] = _("");
const u8 gText_ExpandedPlaceholder_Chan[] = _("");
const u8 gText_ExpandedPlaceholder_Sapphire[] = _("SAPPHIRE");
const u8 gText_ExpandedPlaceholder_Ruby[] = _("RUBY");
const u8 gText_ExpandedPlaceholder_Emerald[] = _("EMERALD");
const u8 gText_ExpandedPlaceholder_Aqua[] = _("AQUA");
const u8 gText_ExpandedPlaceholder_Magma[] = _("MAGMA");
const u8 gText_ExpandedPlaceholder_Archie[] = _("ARCHIE");
const u8 gText_ExpandedPlaceholder_Maxie[] = _("MAXIE");
const u8 gText_ExpandedPlaceholder_Kyogre[] = _("KYOGRE");
const u8 gText_ExpandedPlaceholder_Groudon[] = _("GROUDON");
const u8 gText_ExpandedPlaceholder_Brendan[] = _("BRENDAN");
const u8 gText_ExpandedPlaceholder_May[] = _("MAY");
const u8 gText_EggNickname[] = _("EGG");
const u8 gText_Pokemon[] = _("POKéMON");
const u8 gText_ProfBirchMatchCallName[] = _("PROF. BIRCH");
const u8 gText_MainMenuNewGame[] = _("NEW GAME");
const u8 gText_MainMenuContinue[] = _("CONTINUE");
const u8 gText_MainMenuOption[] = _("OPTION");
const u8 gText_MainMenuMysteryGift[] = _("MYSTERY GIFT");
const u8 gText_MainMenuMysteryGift2[] = _("MYSTERY GIFT");
const u8 gText_MainMenuMysteryEvents[] = _("MYSTERY EVENTS");
const u8 gText_WirelessNotConnected[] = _("The Wireless Adapter is not\nconnected.");
const u8 gText_MysteryGiftCantUse[] = _("MYSTERY GIFT can't be used while\nthe Wireless Adapter is attached.");
const u8 gText_MysteryEventsCantUse[] = _("MYSTERY EVENTS can't be used while\nthe Wireless Adapter is attached.");

#ifndef EMER_REDUCED
const u8 gText_UpdatingSaveExternalData[] = _("Updating save file using external\ndata. Please wait."); // Unused
const u8 gText_SaveFileUpdated[] = _("The save file has been updated."); // Unused
#endif

const u8 gText_SaveFileCorrupted[] = _("The save file is corrupted. The\nprevious save file will be loaded.");
const u8 gText_SaveFileErased[] = _("The save file has been erased\ndue to corruption or damage.");
const u8 gJPText_No1MSubCircuit[] = _("1Mサブきばんが ささっていません！");
const u8 gText_BatteryRunDry[] = _("The internal battery has run dry.\nThe game can be played.\pHowever, clock-based events will\nno longer occur.");

#ifndef EMER_REDUCED
const u8 gText_Player[] = _("PLAYER"); // Unused
const u8 gText_Pokedex[] = _("POKéDEX"); // Unused
#endif

const u8 gText_Time[] = _("TIME");

#ifndef EMER_REDUCED
const u8 gText_Badges[] = _("BADGES"); // Unused
const u8 gText_AButton[] = _("A Button"); // Unused
const u8 gText_BButton[] = _("B Button"); // Unused
const u8 gText_RButton[] = _("R Button"); // Unused
const u8 gText_LButton[] = _("L Button"); // Unused
const u8 gText_Start[] = _("START"); // Unused
const u8 gText_Select[] = _("SELECT"); // Unused
const u8 gText_ControlPad[] = _("+ Control Pad"); // Unused
const u8 gText_LButtonRButton[] = _("L Button  R Button"); // Unused
const u8 gText_Controls[] = _("CONTROLS"); // Unused
ALIGNED(4) const u8 gText_PickOk[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK"); // Unused
ALIGNED(4) const u8 gText_Next[] = _("{A_BUTTON}NEXT"); // Unused
ALIGNED(4) const u8 gText_NextBack[] = _("{A_BUTTON}NEXT {B_BUTTON}BACK"); // Unused
#endif

ALIGNED(4) const u8 gText_PickNextCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}NEXT {B_BUTTON}CANCEL");
ALIGNED(4) const u8 gText_PickCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}{B_BUTTON}CANCEL");
ALIGNED(4) const u8 gText_AButtonExit[] = _("{A_BUTTON}EXIT");
const u8 gText_BirchBoy[] = _("BOY");
const u8 gText_BirchGirl[] = _("GIRL");
const u8 gText_DefaultNameStu[] = _("STU");
const u8 gText_DefaultNameMilton[] = _("MILTON");
const u8 gText_DefaultNameTom[] = _("TOM");
const u8 gText_DefaultNameKenny[] = _("KENNY");
const u8 gText_DefaultNameReid[] = _("REID");
const u8 gText_DefaultNameJude[] = _("JUDE");
const u8 gText_DefaultNameJaxson[] = _("JAXSON");
const u8 gText_DefaultNameEaston[] = _("EASTON");
const u8 gText_DefaultNameWalker[] = _("WALKER");
const u8 gText_DefaultNameTeru[] = _("TERU");
const u8 gText_DefaultNameJohnny[] = _("JOHNNY");
const u8 gText_DefaultNameBrett[] = _("BRETT");
const u8 gText_DefaultNameSeth[] = _("SETH");
const u8 gText_DefaultNameTerry[] = _("TERRY");
const u8 gText_DefaultNameCasey[] = _("CASEY");
const u8 gText_DefaultNameDarren[] = _("DARREN");
const u8 gText_DefaultNameLandon[] = _("LANDON");
const u8 gText_DefaultNameCollin[] = _("COLLIN");
const u8 gText_DefaultNameStanley[] = _("STANLEY");
const u8 gText_DefaultNameQuincy[] = _("QUINCY");
const u8 gText_DefaultNameKimmy[] = _("KIMMY");
const u8 gText_DefaultNameTiara[] = _("TIARA");
const u8 gText_DefaultNameBella[] = _("BELLA");
const u8 gText_DefaultNameJayla[] = _("JAYLA");
const u8 gText_DefaultNameAllie[] = _("ALLIE");
const u8 gText_DefaultNameLianna[] = _("LIANNA");
const u8 gText_DefaultNameSara[] = _("SARA");
const u8 gText_DefaultNameMonica[] = _("MONICA");
const u8 gText_DefaultNameCamila[] = _("CAMILA");
const u8 gText_DefaultNameAubree[] = _("AUBREE");
const u8 gText_DefaultNameRuthie[] = _("RUTHIE");
const u8 gText_DefaultNameHazel[] = _("HAZEL");
const u8 gText_DefaultNameNadine[] = _("NADINE");
const u8 gText_DefaultNameTanja[] = _("TANJA");
const u8 gText_DefaultNameYasmin[] = _("YASMIN");
const u8 gText_DefaultNameNicola[] = _("NICOLA");
const u8 gText_DefaultNameLillie[] = _("LILLIE");
const u8 gText_DefaultNameTerra[] = _("TERRA");
const u8 gText_DefaultNameLucy[] = _("LUCY");
const u8 gText_DefaultNameHalie[] = _("HALIE");
const u8 gText_ThisIsAPokemon[] = _("This is what we call a “POKéMON.”{PAUSE 96}\p");
const u8 gText_5MarksPokemon[] = _("????? POKéMON");
const u8 gText_UnkHeight[] = _("{CLEAR_TO 0x0C}??'??”");
const u8 gText_UnkWeight[] = _("????.? lbs.");

#ifndef EMER_REDUCED
const u8 gText_EmptyPkmnCategory[] = _("                       POKéMON"); // Unused
const u8 gText_EmptyHeight[] = _("{CLEAR_TO 0x0C}    '    ”"); // Unused
const u8 gText_EmptyWeight[] = _("        .   lbs."); // Unused
const u8 gText_EmptyPokedexInfo1[] = _(""); // Unused
#endif

const u8 gText_CryOf[] = _("CRY OF");

#ifndef EMER_REDUCED
const u8 gText_EmptyPokedexInfo2[] = _(""); // Unused
#endif

const u8 gText_SizeComparedTo[] = _("SIZE COMPARED TO ");
const u8 gText_PokedexRegistration[] = _("POKéDEX registration completed.");
const u8 gText_HTHeight[] = _("HT");
const u8 gText_WTWeight[] = _("WT");
const u8 gText_SearchingPleaseWait[] = _("Searching…\nPlease wait.");
const u8 gText_SearchCompleted[] = _("Search completed.");
const u8 gText_NoMatchingPkmnWereFound[] = _("No matching POKéMON were found.");
const u8 gText_SearchForPkmnBasedOnParameters[] = _("Search for POKéMON based on\nselected parameters.");
const u8 gText_SwitchPokedexListings[] = _("Switch POKéDEX listings.");
const u8 gText_ReturnToPokedex[] = _("Return to the POKéDEX.");
const u8 gText_SelectPokedexMode[] = _("Select the POKéDEX mode.");
const u8 gText_SelectPokedexListingMode[] = _("Select the POKéDEX listing mode.");
const u8 gText_ListByFirstLetter[] = _("List by the first letter in the name.\nSpotted POKéMON only.");
const u8 gText_ListByBodyColor[] = _("List by body color.\nSpotted POKéMON only.");
const u8 gText_ListByType[] = _("List by type.\nOwned POKéMON only.");
const u8 gText_ExecuteSearchSwitch[] = _("Execute search/switch.");
const u8 gText_DexHoennTitle[] = _("HOENN DEX");
const u8 gText_DexNatTitle[] = _("NATIONAL DEX");
const u8 gText_DexSortNumericalTitle[] = _("NUMERICAL MODE");
const u8 gText_DexSortAtoZTitle[] = _("A TO Z MODE");
const u8 gText_DexSortHeaviestTitle[] = _("HEAVIEST MODE");
const u8 gText_DexSortLightestTitle[] = _("LIGHTEST MODE");
const u8 gText_DexSortTallestTitle[] = _("TALLEST MODE");
const u8 gText_DexSortSmallestTitle[] = _("SMALLEST MODE");
const u8 gText_DexSearchAlphaABC[] = _("ABC");
const u8 gText_DexSearchAlphaDEF[] = _("DEF");
const u8 gText_DexSearchAlphaGHI[] = _("GHI");
const u8 gText_DexSearchAlphaJKL[] = _("JKL");
const u8 gText_DexSearchAlphaMNO[] = _("MNO");
const u8 gText_DexSearchAlphaPQR[] = _("PQR");
const u8 gText_DexSearchAlphaSTU[] = _("STU");
const u8 gText_DexSearchAlphaVWX[] = _("VWX");
const u8 gText_DexSearchAlphaYZ[] = _("YZ");
const u8 gText_DexSearchColorRed[] = _("RED");
const u8 gText_DexSearchColorBlue[] = _("BLUE");
const u8 gText_DexSearchColorYellow[] = _("YELLOW");
const u8 gText_DexSearchColorGreen[] = _("GREEN");
const u8 gText_DexSearchColorBlack[] = _("BLACK");
const u8 gText_DexSearchColorBrown[] = _("BROWN");
const u8 gText_DexSearchColorPurple[] = _("PURPLE");
const u8 gText_DexSearchColorGray[] = _("GRAY");
const u8 gText_DexSearchColorWhite[] = _("WHITE");
const u8 gText_DexSearchColorPink[] = _("PINK");
const u8 gText_DexHoennDescription[] = _("HOENN region's POKéDEX");
const u8 gText_DexNatDescription[] = _("National edition POKéDEX");
const u8 gText_DexSortNumericalDescription[] = _("POKéMON are listed according to their\nnumber.");
const u8 gText_DexSortAtoZDescription[] = _("Spotted and owned POKéMON are listed\nalphabetically.");
const u8 gText_DexSortHeaviestDescription[] = _("Owned POKéMON are listed from the\nheaviest to the lightest.");
const u8 gText_DexSortLightestDescription[] = _("Owned POKéMON are listed from the\nlightest to the heaviest.");
const u8 gText_DexSortTallestDescription[] = _("Owned POKéMON are listed from the\ntallest to the smallest.");
const u8 gText_DexSortSmallestDescription[] = _("Owned POKéMON are listed from the\nsmallest to the tallest.");
const u8 gText_DexEmptyString[] = _("");
const u8 gText_DexSearchDontSpecify[] = _("DON'T SPECIFY.");
const u8 gText_DexSearchTypeNone[] = _("NONE");
const u8 gText_SelectorArrow[] = _("▶");
const u8 gText_EmptySpace[] = _(" "); // Unused
const u8 gText_WelcomeToHOF[] = _("Welcome to the HALL OF FAME!");
const u8 gText_HOFDexRating[] = _("Spotted POKéMON: {STR_VAR_1}!\nOwned POKéMON: {STR_VAR_2}!\pPROF. BIRCH's POKéDEX rating!\pPROF. BIRCH: Let's see…\p");
const u8 gText_HOFDexSaving[] = _("SAVING…\nDON'T TURN OFF THE POWER.");
const u8 gText_HOFCorrupted[] = _("The HALL OF FAME data is corrupted.");
const u8 gText_HOFNumber[] = _("HALL OF FAME No. {STR_VAR_1}");
const u8 gText_LeagueChamp[] = _("LEAGUE CHAMPION!\nCONGRATULATIONS!");
const u8 gText_Number[] = _("No. ");
const u8 gText_Level[] = _("Lv. ");

#ifndef EMER_REDUCED
const u8 gText_IdNumberSlash[] = _("IDNo. /"); // Unused
#endif

const u8 gText_Name[] = _("NAME");
const u8 gText_IDNumber[] = _("IDNo.");
const u8 gText_BirchInTrouble[] = _("PROF. BIRCH is in trouble!\nRelease a POKéMON and rescue him!");
const u8 gText_ConfirmStarterChoice[] = _("Do you choose this POKéMON?");

#ifndef EMER_REDUCED
const u8 gText_Pokemon4[] = _("POKéMON"); // Unused
#endif

const u8 gText_FlyToWhere[] = _("FLY to where?");
const u8 gMenuText_Use[] = _("USE");
const u8 gMenuText_Toss[] = _("TOSS");
const u8 gMenuText_Register[] = _("REGISTER");
const u8 gMenuText_Give[] = _("GIVE");
const u8 gMenuText_CheckTag[] = _("CHECK TAG");
const u8 gMenuText_Confirm[] = _("CONFIRM");
const u8 gMenuText_Walk[] = _("WALK");
const u8 gText_Cancel[] = _("CANCEL");
const u8 gText_Cancel2[] = _("CANCEL");
const u8 gMenuText_Show[] = _("SHOW");
const u8 gText_EmptyString2[] = _("");

#ifndef EMER_REDUCED
const u8 gText_Cancel7[] = _("CANCEL"); // Unused
#endif

const u8 gText_Item[] = _("ITEM");
const u8 gText_Mail[] = _("MAIL");
const u8 gText_Take[] = _("TAKE");
const u8 gText_Store[] = _("STORE");
const u8 gMenuText_Check[] = _("CHECK");
const u8 gText_None[] = _("NONE");
const u8 gMenuText_Deselect[] = _("DESELECT");
const u8 gText_ThreeMarks[] = _("???");
const u8 gText_FiveMarks[] = _("?????");
const u8 gText_Slash[] = _("/");
const u8 gText_OneDash[] = _("-");
const u8 gText_TwoDashes[] = _("--");
const u8 gText_ThreeDashes[] = _("---");
const u8 gText_MaleSymbol[] = _("♂");
const u8 gText_FemaleSymbol[] = _("♀");
const u8 gText_LevelSymbol[] = _("{LV}");
const u8 gText_NumberClear01[] = _("{NO}{CLEAR 0x01}");

#ifndef EMER_REDUCED
const u8 gText_PlusSymbol[] = _("+"); // Unused
const u8 gText_RightArrow[] = _("{RIGHT_ARROW}"); // Unused
#endif

const u8 gText_IDNumber2[] = _("{ID}{NO}");
const u8 gText_Space[] = _(" ");
const u8 gText_SelectorArrow2[] = _("▶");
const u8 gText_GoBackPrevMenu[] = _("Go back to the\nprevious menu.");
const u8 gText_WhatWouldYouLike[] = _("What would you like to do?");
const u8 gMenuText_Give2[] = _("GIVE");
const u8 gText_xVar1[] = _("×{STR_VAR_1}");

#ifndef EMER_REDUCED
const u8 gText_Berry2[] = _(" BERRY"); // Unused
#endif

const u8 gText_Coins[] = _("{STR_VAR_1} COINS");
const u8 gText_CloseBag[] = _("CLOSE BAG");
const u8 gText_Var1IsSelected[] = _("{STR_VAR_1} is\nselected.");
const u8 gText_CantWriteMail[] = _("You can't write\nMAIL here.");
const u8 gText_NoPokemon[] = _("There is no\nPOKéMON.");
const u8 gText_MoveVar1Where[] = _("Move the\n{STR_VAR_1}\nwhere?");
const u8 gText_Var1CantBeHeld[] = _("The {STR_VAR_1} can't be held.");
const u8 gText_Var1CantBeHeldHere[] = _("The {STR_VAR_1} can't be held\nhere.");
const u8 gText_DepositHowManyVar1[] = _("Deposit how many\n{STR_VAR_1}(s)?");
const u8 gText_DepositedVar2Var1s[] = _("Deposited {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gText_NoRoomForItems[] = _("There's no room to\nstore items.");
const u8 gText_CantStoreImportantItems[] = _("Important items\ncan't be stored in\nthe PC!");
const u8 gText_TooImportantToToss[] = _("That's much too\nimportant to toss\nout!");
const u8 gText_TossHowManyVar1s[] = _("Toss out how many\n{STR_VAR_1}(s)?");
const u8 gText_ThrewAwayVar2Var1s[] = _("Threw away {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gText_ConfirmTossItems[] = _("Is it okay to\nthrow away {STR_VAR_2}\n{STR_VAR_1}(s)?");
const u8 gText_DadsAdvice[] = _("DAD's advice…\n{PLAYER}, there's a time and place for\leverything!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantDismountBike[] = _("You can't dismount your BIKE here.{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderNearby[] = _("Huh?\nThe ITEMFINDER's responding!\pThere's an item buried around here!{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderOnTop[] = _("Oh!\nThe ITEMFINDER's shaking wildly!{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderNothing[] = _("… … … …Nope!\nThere's no response.{PAUSE_UNTIL_PRESS}");
const u8 gText_CoinCase[] = _("Your COINS:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gText_BootedUpTM[] = _("Booted up a TM.");
const u8 gText_BootedUpHM[] = _("Booted up an HM.");
const u8 gText_TMHMContainedVar1[] = _("It contained\n{STR_VAR_1}.\pTeach {STR_VAR_1}\nto a POKéMON?");
const u8 gText_PlayerUsedVar2[] = _("{PLAYER} used the\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_RepelEffectsLingered[] = _("But the effects of a REPEL\nlingered from earlier.{PAUSE_UNTIL_PRESS}");
const u8 gText_UsedVar2WildLured[] = _("{PLAYER} used the\n{STR_VAR_2}.\pWild POKéMON will be lured.{PAUSE_UNTIL_PRESS}");
const u8 gText_UsedVar2WildRepelled[] = _("{PLAYER} used the\n{STR_VAR_2}.\pWild POKéMON will be repelled.{PAUSE_UNTIL_PRESS}");
const u8 gText_BoxFull[] = _("The BOX is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_PowderQty[] = _("POWDER QTY: {STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gText_TheField[] = _("the field");
const u8 gText_TheBattle[] = _("the battle");
const u8 gText_ThePokemonList[] = _("the POKéMON LIST");
const u8 gText_TheShop[] = _("the shop");
const u8 gText_ThePC[] = _("the PC");

const u8 *const gBagMenu_ReturnToStrings[] =
{
    [ITEMMENULOCATION_FIELD]               = gText_TheField,
    [ITEMMENULOCATION_BATTLE]              = gText_TheBattle,
    [ITEMMENULOCATION_PARTY]               = gText_ThePokemonList,
    [ITEMMENULOCATION_SHOP]                = gText_TheShop,
    [ITEMMENULOCATION_BERRY_TREE]          = gText_TheField,
    [ITEMMENULOCATION_BERRY_BLENDER_CRUSH] = gText_TheField,
    [ITEMMENULOCATION_ITEMPC]              = gText_ThePC,
    [ITEMMENULOCATION_FAVOR_LADY]          = gText_TheField,
    [ITEMMENULOCATION_QUIZ_LADY]           = gText_TheField,
    [ITEMMENULOCATION_APPRENTICE]          = gText_TheField,
    [ITEMMENULOCATION_WALLY]               = gText_TheBattle,
    [ITEMMENULOCATION_PCBOX]               = gText_ThePC
};

const u8 *const gPyramidBagMenu_ReturnToStrings[] =
{
    [PYRAMIDBAG_LOC_FIELD]       = gText_TheField,
    [PYRAMIDBAG_LOC_BATTLE]      = gText_TheBattle,
    [PYRAMIDBAG_LOC_PARTY]       = gText_ThePokemonList,
    [PYRAMIDBAG_LOC_CHOOSE_TOSS] = gText_TheField
};

const u8 gText_ReturnToVar1[] = _("Return to\n{STR_VAR_1}.");
const u8 gText_ItemsPocket[] = _("ITEMS");
const u8 gText_PokeBallsPocket[] = _("POKé BALLS");
const u8 gText_TMHMPocket[] = _("TMs & HMs");
const u8 gText_BerriesPocket[] = _("BERRIES");
const u8 gText_KeyItemsPocket[] = _("KEY ITEMS");

const u8 *const gPocketNamesStringsTable[] =
{
    [ITEMS_POCKET] = gText_ItemsPocket,
    [BALLS_POCKET] = gText_PokeBallsPocket,
    [TMHM_POCKET]  = gText_TMHMPocket,
    [BERRIES_POCKET] = gText_BerriesPocket,
    [KEYITEMS_POCKET] = gText_KeyItemsPocket
};

const u8 gText_NumberItem_TMBerry[] = _("{NO}{STR_VAR_1}{CLEAR 0x07}{STR_VAR_2}");
const u8 gText_NumberItem_HM[] = _("{CLEAR_TO 0x11}{STR_VAR_1}{CLEAR 0x05}{STR_VAR_2}");
const u8 gText_SizeSlash[] = _("SIZE /");
const u8 gText_FirmSlash[] = _("FIRM /");
const u8 gText_Var1DotVar2[] = _("{STR_VAR_1}.{STR_VAR_2}”");

// Berry firmness strings
const u8 gBerryFirmnessString_VerySoft[] = _("Very soft");
const u8 gBerryFirmnessString_Soft[] = _("Soft");
const u8 gBerryFirmnessString_Hard[] = _("Hard");
const u8 gBerryFirmnessString_VeryHard[] = _("Very hard");
const u8 gBerryFirmnessString_SuperHard[] = _("Super hard");

const u8 gText_NumberVar1Var2[] = _("{NO}{STR_VAR_1} {STR_VAR_2}");
const u8 gText_BerryTag[] = _("BERRY TAG");
const u8 gText_RedPokeblock[] = _("RED {POKEBLOCK}");
const u8 gText_BluePokeblock[] = _("BLUE {POKEBLOCK}");
const u8 gText_PinkPokeblock[] = _("PINK {POKEBLOCK}");
const u8 gText_GreenPokeblock[] = _("GREEN {POKEBLOCK}");
const u8 gText_YellowPokeblock[] = _("YELLOW {POKEBLOCK}");
const u8 gText_PurplePokeblock[] = _("PURPLE {POKEBLOCK}");
const u8 gText_IndigoPokeblock[] = _("INDIGO {POKEBLOCK}");
const u8 gText_BrownPokeblock[] = _("BROWN {POKEBLOCK}");
const u8 gText_LiteBluePokeblock[] = _("LITEBLUE {POKEBLOCK}");
const u8 gText_OlivePokeblock[] = _("OLIVE {POKEBLOCK}");
const u8 gText_GrayPokeblock[] = _("GRAY {POKEBLOCK}");
const u8 gText_BlackPokeblock[] = _("BLACK {POKEBLOCK}");
const u8 gText_WhitePokeblock[] = _("WHITE {POKEBLOCK}");
const u8 gText_GoldPokeblock[] = _("GOLD {POKEBLOCK}");
const u8 gText_Spicy[] = _("SPICY");
const u8 gText_Dry[] = _("DRY");
const u8 gText_Sweet[] = _("SWEET");
const u8 gText_Bitter[] = _("BITTER");
const u8 gText_Sour[] = _("SOUR");

#ifndef EMER_REDUCED
const u8 gText_Tasty[] = _("TASTY"); // Unused
const u8 gText_Feel[] = _("FEEL"); // Unused
#endif

const u8 gText_StowCase[] = _("Stow CASE.");
const u8 gText_LvVar1[] = _("{LV}{STR_VAR_1}");
const u8 gText_ThrowAwayVar1[] = _("Throw away this\n{STR_VAR_1}?");
const u8 gText_Var1ThrownAway[] = _("The {STR_VAR_1}\nwas thrown away.");
const u8 gText_Var1AteTheVar2[] = _("{STR_VAR_1} ate the\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_Var1HappilyAteVar2[] = _("{STR_VAR_1} happily ate the\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_Var1DisdainfullyAteVar2[] = _("{STR_VAR_1} disdainfully ate the\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_ShopBuy[] = _("BUY");
const u8 gText_ShopSell[] = _("SELL");
const u8 gText_ShopQuit[] = _("QUIT");
const u8 gText_InBagVar1[] = _("IN BAG: {STR_VAR_1}");
const u8 gText_QuitShopping[] = _("Quit shopping.");
const u8 gText_Var1CertainlyHowMany[] = _("{STR_VAR_1}? Certainly.\nHow many would you like?");
const u8 gText_Var1CertainlyHowMany2[] = _("{STR_VAR_1}? Certainly.\nHow many would you like?");
const u8 gText_Var1AndYouWantedVar2[] = _("{STR_VAR_1}? And you wanted {STR_VAR_2}?\nThat will be ¥{STR_VAR_3}.");
const u8 gText_Var1IsItThatllBeVar2[] = _("{STR_VAR_1}, is it?\nThat'll be ¥{STR_VAR_2}. Do you want it?");
const u8 gText_YouWantedVar1ThatllBeVar2[] = _("You wanted {STR_VAR_1}?\nThat'll be ¥{STR_VAR_2}. Will that be okay?");
const u8 gText_HereYouGoThankYou[] = _("Here you go!\nThank you very much.");
const u8 gText_ThankYouIllSendItHome[] = _("Thank you!\nI'll send it to your home PC.");
const u8 gText_ThanksIllSendItHome[] = _("Thanks!\nI'll send it to your PC at home.");
const u8 gText_YouDontHaveMoney[] = _("You don't have enough money.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreRoomForThis[] = _("You have no more room for this\nitem.{PAUSE_UNTIL_PRESS}");
#ifdef INFINITE_TMS
// Text for telling the player they already have an item and cannot buy more
const u8 gText_YouAlreadyHaveThis[] = _("You already have this item.{PAUSE_UNTIL_PRESS}");
#endif
const u8 gText_SpaceForVar1Full[] = _("The space for {STR_VAR_1} is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_AnythingElseICanHelp[] = _("Is there anything else I can help\nyou with?");
const u8 gText_CanIHelpWithAnythingElse[] = _("Can I help you with anything else?");
const u8 gText_ThrowInPremierBall[] = _("I'll throw in a PREMIER BALL, too.{PAUSE_UNTIL_PRESS}");
const u8 gText_CantBuyKeyItem[] = _("{STR_VAR_2}? Oh, no.\nI can't buy that.{PAUSE_UNTIL_PRESS}");
const u8 gText_HowManyToSell[] = _("{STR_VAR_2}?\nHow many would you like to sell?");
const u8 gText_ICanPayVar1[] = _("I can pay ¥{STR_VAR_1}.\nWould that be okay?");
const u8 gText_TurnedOverVar1ForVar2[] = _("Turned over the {STR_VAR_2}\nand received ¥{STR_VAR_1}.");
const u8 gText_PokedollarVar1[] = _("¥{STR_VAR_1}");
const u8 gText_Shift[] = _("SHIFT");
const u8 gText_SendOut[] = _("SEND OUT");
const u8 gText_Switch2[] = _("SWITCH");
const u8 gText_Summary5[] = _("SUMMARY");

#ifndef EMER_REDUCED
const u8 gText_Moves[] = _("MOVES"); // Unused
#endif

const u8 gText_Enter[] = _("ENTER");
const u8 gText_NoEntry[] = _("NO ENTRY");
const u8 gText_Take2[] = _("TAKE");
const u8 gText_Read2[] = _("READ");
const u8 gText_Trade4[] = _("TRADE");
const u8 gText_HP3[] = _("HP");
const u8 gText_SpAtk3[] = _("SP. ATK");
const u8 gText_SpDef3[] = _("SP. DEF");
const u8 gText_WontHaveEffect[] = _("It won't have any effect.{PAUSE_UNTIL_PRESS}");
const u8 gText_CantBeUsedOnPkmn[] = _("This can't be used on\nthat POKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCantSwitchOut[] = _("{STR_VAR_1} can't be switched\nout!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyInBattle[] = _("{STR_VAR_1} is already\nin battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadySelected[] = _("{STR_VAR_1} has already been\nselected.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHasNoEnergy[] = _("{STR_VAR_1} has no energy\nleft to battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantSwitchWithAlly[] = _("You can't switch {STR_VAR_1}'s\nPOKéMON with one of yours!{PAUSE_UNTIL_PRESS}");
const u8 gText_EggCantBattle[] = _("An EGG can't battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantUseUntilNewBadge[] = _("This can't be used until a new\nBADGE is obtained.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreThanVar1Pkmn[] = _("No more than {STR_VAR_1} POKéMON\nmay enter.{PAUSE_UNTIL_PRESS}");
const u8 gText_SendMailToPC[] = _("Send the removed MAIL to\nyour PC?");
const u8 gText_MailSentToPC[] = _("The MAIL was sent to your PC.{PAUSE_UNTIL_PRESS}");
const u8 gText_PCMailboxFull[] = _("Your PC's MAILBOX is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailMessageWillBeLost[] = _("If the MAIL is removed, the\nmessage will be lost. Okay?");
const u8 gText_RemoveMailBeforeItem[] = _("MAIL must be removed before\nholding an item.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWasGivenItem[] = _("{STR_VAR_1} was given the\n{STR_VAR_2} to hold.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyHoldingItemSwitch[] = _("{STR_VAR_1} is already holding\none {STR_VAR_2}.\pWould you like to switch the\ntwo items?");
const u8 gText_PkmnNotHolding[] = _("{STR_VAR_1} isn't holding\nanything.{PAUSE_UNTIL_PRESS}");
const u8 gText_ReceivedItemFromPkmn[] = _("Received the {STR_VAR_2}\nfrom {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTakenFromPkmn[] = _("MAIL was taken from the\nPOKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gText_SwitchedPkmnItem[] = _("The {STR_VAR_2} was taken and\nreplaced with the {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHoldingItemCantHoldMail[] = _("This POKéMON is holding an\nitem. It cannot hold MAIL.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTransferredFromMailbox[] = _("MAIL was transferred from\nthe MAILBOX.{PAUSE_UNTIL_PRESS}");
const u8 gText_BagFullCouldNotRemoveItem[] = _("The BAG is full. The POKéMON's\nitem could not be removed.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnLearnedMove3[] = _("{STR_VAR_1} learned\n{STR_VAR_2}!");
const u8 gText_PkmnCantLearnMove[] = _("{STR_VAR_1} and {STR_VAR_2}\nare not compatible.\p{STR_VAR_2} can't be\nlearned.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnNeedsToReplaceMove[] = _("{STR_VAR_1} wants to learn the\nmove {STR_VAR_2}.\pHowever, {STR_VAR_1} already\nknows four moves.\pShould a move be deleted and\nreplaced with {STR_VAR_2}?");
const u8 gText_StopLearningMove2[] = _("Stop trying to teach\n{STR_VAR_2}?");
const u8 gText_MoveNotLearned[] = _("{STR_VAR_1} did not learn the\nmove {STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhichMoveToForget[] = _("Which move should be forgotten?{PAUSE_UNTIL_PRESS}");
const u8 gText_12PoofForgotMove[] = _("1, {PAUSE 15}2, and{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}Poof!\p{STR_VAR_1} forgot how to\nuse {STR_VAR_2}.\pAnd…{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyKnows[] = _("{STR_VAR_1} already knows\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHPRestoredByVar2[] = _("{STR_VAR_1}'s HP was restored\nby {STR_VAR_2} point(s).{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfPoison[] = _("{STR_VAR_1} was cured of its\npoisoning.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfParalysis[] = _("{STR_VAR_1} was cured of\nparalysis.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWokeUp2[] = _("{STR_VAR_1} woke up.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnBurnHealed[] = _("{STR_VAR_1}'s burn was healed.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnThawedOut[] = _("{STR_VAR_1} was thawed out.{PAUSE_UNTIL_PRESS}");
const u8 gText_PPWasRestored[] = _("PP was restored.{PAUSE_UNTIL_PRESS}");

#ifndef EMER_REDUCED
const u8 gText_PkmnRegainhedHealth[] = _("{STR_VAR_1} regained health.{PAUSE_UNTIL_PRESS}"); // Unused
#endif

const u8 gText_PkmnBecameHealthy[] = _("{STR_VAR_1} became healthy.{PAUSE_UNTIL_PRESS}");
const u8 gText_MovesPPIncreased[] = _("{STR_VAR_1}'s PP increased.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnElevatedToLvVar2[] = _("{STR_VAR_1} was elevated to\nLv. {STR_VAR_2}.");
const u8 gText_PkmnBaseVar2StatIncreased[] = _("{STR_VAR_1}'s base {STR_VAR_2}\nstat was raised.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnFriendlyBaseVar2Fell[] = _("{STR_VAR_1} turned friendly.\nThe base {STR_VAR_2} fell!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAdoresBaseVar2Fell[] = _("{STR_VAR_1} adores you!\nThe base {STR_VAR_2} fell!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnFriendlyBaseVar2CantFall[] = _("{STR_VAR_1} turned friendly.\nThe base {STR_VAR_2} can't fall!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnSnappedOutOfConfusion[] = _("{STR_VAR_1} snapped out of its\nconfusion.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnGotOverInfatuation[] = _("{STR_VAR_1} got over its\ninfatuation.{PAUSE_UNTIL_PRESS}");
const u8 gText_ThrowAwayItem[] = _("Throw away this\n{STR_VAR_1}?");
const u8 gText_ItemThrownAway[] = _("The {STR_VAR_1}\nwas thrown away.{PAUSE_UNTIL_PRESS}");

#ifndef EMER_REDUCED
const u8 gText_TeachWhichPokemon2[] = _("Teach which POKéMON?"); // Unused
#endif

const u8 gText_ChoosePokemon[] = _("Choose a POKéMON.");
const u8 gText_MoveToWhere[] = _("Move to where?");
const u8 gText_TeachWhichPokemon[] = _("Teach which POKéMON?");
const u8 gText_UseOnWhichPokemon[] = _("Use on which POKéMON?");
const u8 gText_GiveToWhichPokemon[] = _("Give to which POKéMON?");
const u8 gText_DoWhatWithPokemon[] = _("Do what with this {PKMN}?");
const u8 gText_NothingToCut[] = _("There's nothing to CUT.");
const u8 gText_CantSurfHere[] = _("You can't SURF here.");
const u8 gText_AlreadySurfing[] = _("You're already SURFING.");
const u8 gText_CantUseHere[] = _("Can't use that here.");
const u8 gText_RestoreWhichMove[] = _("Restore which move?");
const u8 gText_BoostPp[] = _("Boost PP of which move?");
const u8 gText_DoWhatWithItem[] = _("Do what with an item?");
const u8 gText_NoPokemonForBattle[] = _("No POKéMON for battle!");
const u8 gText_ChoosePokemon2[] = _("Choose a POKéMON.");
const u8 gText_NotEnoughHp[] = _("Not enough HP…");
const u8 gText_PokemonAreNeeded[] = _("{STR_VAR_1} POKéMON are needed.");
const u8 gText_PokemonCantBeSame[] = _("POKéMON can't be the same.");
const u8 gText_NoIdenticalHoldItems[] = _("No identical hold items.");
const u8 gText_CurrentIsTooFast[] = _("The current is much too fast!");
const u8 gText_DoWhatWithMail[] = _("Do what with the MAIL?");
const u8 gText_ChoosePokemonCancel[] = _("Choose POKéMON or CANCEL.");
const u8 gText_ChoosePokemonConfirm[] = _("Choose POKéMON and confirm.");
const u8 gText_EnjoyCycling[] = _("Let's enjoy cycling!");
const u8 gText_InUseAlready_PM[] = _("This is in use already.");
const u8 gText_AlreadyHoldingOne[] = _("{STR_VAR_1} is already holding\none {STR_VAR_2}.");
const u8 gText_NoUse[] = _("No use.");
const u8 gText_Able[] = _("ABLE");
const u8 gText_First_PM[] = _("FIRST");
const u8 gText_Second_PM[] = _("SECOND");
const u8 gText_Third_PM[] = _("THIRD");
const u8 gText_Able2[] = _("ABLE");
const u8 gText_NotAble[] = _("NOT ABLE");
const u8 gText_Able3[] = _("ABLE!");
const u8 gText_NotAble2[] = _("NOT ABLE!");
const u8 gText_Learned[] = _("LEARNED");
const u8 gText_Have[] = _("HAVE");
const u8 gText_DontHave[] = _("DON'T HAVE");
const u8 gText_Fourth[] = _("FOURTH");
const u8 gText_PkmnCantParticipate[] = _("That POKéMON can't participate.{PAUSE_UNTIL_PRESS}");
const u8 gText_CancelParticipation[] = _("Cancel participation?");
const u8 gText_CancelBattle[] = _("Cancel the battle?");
const u8 gText_ReturnToWaitingRoom[] = _("Return to the WAITING ROOM?");
const u8 gText_CancelChallenge[] = _("Cancel the challenge?");
const u8 gText_EscapeFromHere[] = _("Want to escape from here and return\nto {STR_VAR_1}?");
const u8 gText_ReturnToHealingSpot[] = _("Want to return to the healing spot\nused last in {STR_VAR_1}?");
const u8 gText_PauseUntilPress[] = _("{PAUSE_UNTIL_PRESS}");
const u8 gJPText_AreYouSureYouWantToSpinTradeMon[] = _("{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか？");
ALIGNED(4) const u8 gText_OnlyPkmnForBattle[] = _("That's your only\nPOKéMON for battle.");
ALIGNED(4) const u8 gText_PkmnCantBeTradedNow[] = _("That POKéMON can't be traded\nnow.");
ALIGNED(4) const u8 gText_EggCantBeTradedNow[] = _("An EGG can't be traded now.");
ALIGNED(4) const u8 gText_OtherTrainersPkmnCantBeTraded[] = _("The other TRAINER's POKéMON\ncan't be traded now.");
ALIGNED(4) const u8 gText_OtherTrainerCantAcceptPkmn[] = _("The other TRAINER can't accept\nthat POKéMON now.");
ALIGNED(4) const u8 gText_CantTradeWithTrainer[] = _("You can't trade with that\nTRAINER now.");
ALIGNED(4) const u8 gText_NotPkmnOtherTrainerWants[] = _("That isn't the type of POKéMON\nthat the other TRAINER wants.");
ALIGNED(4) const u8 gText_ThatIsntAnEgg[] = _("That isn't an EGG.");
const u8 gText_Register[] = _("REGISTER");
const u8 gText_Attack3[] = _("ATTACK");
const u8 gText_Defense3[] = _("DEFENSE");
const u8 gText_SpAtk4[] = _("SP. ATK");
const u8 gText_SpDef4[] = _("SP. DEF");
const u8 gText_Speed2[] = _("SPEED");
const u8 gText_HP4[] = _("HP");

#ifndef EMER_REDUCED
const u8 gText_EmptyString8[] = _(""); // Unused
#endif

const u8 gText_OTSlash[] = _("OT/");
const u8 gText_RentalPkmn[] = _("RENTAL POKéMON");
const u8 gText_TypeSlash[] = _("TYPE/");
const u8 gText_Power[] = _("POWER");
const u8 gText_Accuracy2[] = _("ACCURACY");
const u8 gText_Appeal[] = _("APPEAL");
const u8 gText_Jam[] = _("JAM");
const u8 gText_Status[] = _("STATUS");
const u8 gText_ExpPoints[] = _("EXP. POINTS");
const u8 gText_NextLv[] = _("NEXT LV.");
const u8 gText_RibbonsVar1[] = _("RIBBONS: {STR_VAR_1}");
const u8 gText_EmptyString5[] = _("");

#ifndef EMER_REDUCED
const u8 gText_Events[] = _("EVENTS"); // Unused
#endif

const u8 gText_Switch[] = _("SWITCH");
const u8 gText_PkmnInfo[] = _("POKéMON INFO");
const u8 gText_PkmnSkills[] = _("POKéMON SKILLS");
const u8 gText_BattleMoves[] = _("BATTLE MOVES");
const u8 gText_ContestMoves[] = _("C0NTEST MOVES");
const u8 gText_Info[] = _("INFO");
const u8 gText_EggWillTakeALongTime[] = _("It looks like this EGG will\ntake a long time to hatch.");
const u8 gText_EggWillTakeSomeTime[] = _("What will hatch from this?\nIt will take some time.");
const u8 gText_EggWillHatchSoon[] = _("It moves occasionally.\nIt should hatch soon.");
const u8 gText_EggAboutToHatch[] = _("It's making sounds.\nIt's about to hatch!");
const u8 gText_HMMovesCantBeForgotten2[] = _("HM moves can't be\nforgotten now.");
const u8 gText_XNatureMetAtYZ[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nmet at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNatureHatchedAtYZ[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nhatched at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNatureObtainedInTrade[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nobtained in a trade.");
const u8 gText_XNatureFatefulEncounter[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nobtained in a fateful\nencounter at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
const u8 gText_XNatureProbablyMetAt[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nprobably met at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNature[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature");
const u8 gText_XNatureMetSomewhereAt[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nmet somewhere at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
const u8 gText_XNatureHatchedSomewhereAt[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5} nature,\nhatched somewhere at {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
const u8 gText_OddEggFoundByCouple[] = _("An odd POKéMON EGG found\nby the DAY CARE couple.");
const u8 gText_PeculiarEggNicePlace[] = _("A peculiar POKéMON EGG\nobtained at the nice place.");
const u8 gText_PeculiarEggTrade[] = _("A peculiar POKéMON EGG\nobtained in a trade.");
const u8 gText_EggFromHotSprings[] = _("A POKéMON EGG obtained\nat the hot springs.");
const u8 gText_EggFromTraveler[] = _("An odd POKéMON EGG\nobtained from a traveler.");
const u8 gText_ApostropheSBase[] = _("'s BASE");
const u8 gText_OkayToDeleteFromRegistry[] = _("Is it okay to delete {STR_VAR_1}\nfrom the REGISTRY?");
const u8 gText_RegisteredDataDeleted[] = _("The registered data was deleted.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoRegistry[] = _("There is no REGISTRY.{PAUSE_UNTIL_PRESS}");
const u8 gText_DelRegist[] = _("DEL REGIST.");

#ifndef EMER_REDUCED
const u8 gText_Var3Var1SlashVar2[] = _("{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}"); // Unused
#endif

const u8 gText_Decorate[] = _("DECORATE");
const u8 gText_PutAway[] = _("PUT AWAY");
const u8 gText_Toss2[] = _("TOSS");
const u8 gText_Color161Shadow161[] = _("{COLOR 161}{SHADOW 161}");
const u8 gText_PutOutSelectedDecorItem[] = _("Put out the selected decoration item.");
const u8 gText_StoreChosenDecorInPC[] = _("Store the chosen decoration in the PC.");
const u8 gText_ThrowAwayUnwantedDecors[] = _("Throw away unwanted decorations.");
const u8 gText_NoDecorations[] = _("There are no decorations.{PAUSE_UNTIL_PRESS}");
const u8 gText_Desk[] = _("DESK");
const u8 gText_Chair[] = _("CHAIR");
const u8 gText_Plant[] = _("PLANT");
const u8 gText_Ornament[] = _("ORNAMENT");
const u8 gText_Mat[] = _("MAT");
const u8 gText_Poster[] = _("POSTER");
const u8 gText_Doll[] = _("DOLL");
const u8 gText_Cushion[] = _("CUSHION");
const u8 gText_Gold[] = _("GOLD");
const u8 gText_Silver[] = _("SILVER");
const u8 gText_PlaceItHere[] = _("Place it here?");
const u8 gText_CantBePlacedHere[] = _("It can't be placed here.");
const u8 gText_CancelDecorating[] = _("Cancel decorating?");
const u8 gText_InUseAlready[] = _("This is in use already.");
const u8 gText_NoMoreDecorations[] = _("No more decorations can be placed.\nThe most that can be placed are {STR_VAR_1}.");
const u8 gText_NoMoreDecorations2[] = _("No more decorations can be placed.\nThe most that can be placed are {STR_VAR_1}.");

#ifndef EMER_REDUCED
const u8 gText_MustBePlacedOnDesk[] = _("This can't be placed here.\nIt must be on a DESK, etc."); // Unused
#endif

const u8 gText_CantPlaceInRoom[] = _("This decoration can't be placed in\nyour own room.");
const u8 gText_CantThrowAwayInUse[] = _("This decoration is in use.\nIt can't be thrown away.");
const u8 gText_DecorationWillBeDiscarded[] = _("This {STR_VAR_1} will be discarded.\nIs that okay?");
const u8 gText_DecorationThrownAway[] = _("The decoration item was thrown away.");
const u8 gText_StopPuttingAwayDecorations[] = _("Stop putting away decorations?");
const u8 gText_NoDecorationHere[] = _("There is no decoration item here.");
const u8 gText_ReturnDecorationToPC[] = _("Return this decoration to the PC?");
const u8 gText_DecorationReturnedToPC[] = _("The decoration was returned to the PC.");
const u8 gText_NoDecorationsInUse[] = _("There are no decorations in use.{PAUSE_UNTIL_PRESS}");
const u8 gText_Tristan[] = _("TRISTAN");
const u8 gText_Philip[] = _("PHILIP");
const u8 gText_Dennis[] = _("DENNIS");
const u8 gText_Roberto[] = _("ROBERTO");
const u8 gText_TurnOff[] = _("TURN OFF");
const u8 gText_Decoration[] = _("DECORATION");
const u8 gText_ItemStorage[] = _("ITEM STORAGE");
const u8 gText_Mailbox[] = _("MAILBOX");
const u8 gText_DepositItem[] = _("DEPOSIT ITEM");
const u8 gText_WithdrawItem[] = _("WITHDRAW ITEM");
const u8 gText_TossItem[] = _("TOSS ITEM");
const u8 gText_StoreItemsInPC[] = _("Store items in the PC.");
const u8 gText_TakeOutItemsFromPC[] = _("Take out items from the PC.");
const u8 gText_ThrowAwayItemsInPC[] = _("Throw away items stored in the PC.");
const u8 gText_NoItems[] = _("There are no items.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoRoomInBag[] = _("There is no more\nroom in the BAG.");
const u8 gText_WithdrawHowManyItems[] = _("Withdraw how many\n{STR_VAR_1}(s)?");
const u8 gText_WithdrawXItems[] = _("Withdrew {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gText_Read[] = _("READ");
const u8 gText_MoveToBag[] = _("MOVE TO BAG");
const u8 gText_Give2[] = _("GIVE");
const u8 gText_NoMailHere[] = _("There's no MAIL here.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhatToDoWithVar1sMail[] = _("What would you like to do with\n{STR_VAR_1}'s MAIL?");
const u8 gText_MessageWillBeLost[] = _("The message will be lost.\nIs that okay?");
const u8 gText_BagIsFull[] = _("The BAG is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailToBagMessageErased[] = _("The MAIL was returned to the BAG\nwith its message erased.{PAUSE_UNTIL_PRESS}");
const u8 gText_Dad[] = _("DAD");
const u8 gText_Mom[] = _("MOM");
const u8 gText_Wallace[] = _("WALLACE");
const u8 gText_Steven[] = _("STEVEN");
const u8 gText_Brawly[] = _("BRAWLY");
const u8 gText_Winona[] = _("WINONA");
const u8 gText_Phoebe[] = _("PHOEBE");
const u8 gText_Glacia[] = _("GLACIA");
const u8 gText_Petalburg[] = _("PETALBURG");
const u8 gText_Slateport[] = _("SLATEPORT");

#ifndef EMER_REDUCED
const u8 gText_Littleroot[] = _("LITTLEROOT"); // Unused. Given the context, Briney may at one point have been able to sail the player here
const u8 gText_Lilycove[] = _("LILYCOVE");     // Unused. Given the context, Briney may at one point have been able to sail the player here
#endif

const u8 gText_Dewford[] = _("DEWFORD");
const u8 gText_Enter2[] = _("ENTER");
const u8 gText_Info2[] = _("INFO");
const u8 gText_WhatsAContest[] = _("What's a CONTEST?");
const u8 gText_TypesOfContests[] = _("Types of CONTESTS");
const u8 gText_Ranks[] = _("Ranks");

#ifndef EMER_REDUCED
const u8 gText_Judging[] = _("Judging"); //unused
#endif

const u8 gText_CoolnessContest[] = _("COOLNESS CONTEST");
const u8 gText_BeautyContest[] = _("BEAUTY CONTEST");
const u8 gText_CutenessContest[] = _("CUTENESS CONTEST");
const u8 gText_SmartnessContest[] = _("SMARTNESS CONTEST");
const u8 gText_ToughnessContest[] = _("TOUGHNESS CONTEST");
const u8 gText_Decoration2[] = _("DECORATION");
const u8 gText_PackUp[] = _("PACK UP");

#ifndef EMER_REDUCED
const u8 gText_Count[] = _("COUNT"); //unused
#endif

const u8 gText_Registry[] = _("REGISTRY");
const u8 gText_Information[] = _("INFORMATION");
const u8 gText_Mach[] = _("MACH");
const u8 gText_Acro[] = _("ACRO");
const u8 gText_Psn[] = _("PSN");
const u8 gText_Par[] = _("PAR");
const u8 gText_Slp[] = _("SLP");
const u8 gText_Brn[] = _("BRN");
const u8 gText_Frz[] = _("FRZ");

#ifndef EMER_REDUCED
const u8 gText_Toxic[] = _("TOXIC"); // Unused
const u8 gText_Ok3[] = _("OK"); // Unused
const u8 gText_Quit[] = _("QUIT"); // Unused
#endif

const u8 gText_SawIt[] = _("Saw it");
const u8 gText_NotYet[] = _("Not yet");
const u8 gText_Yes[] = _("YES");
const u8 gText_No[] = _("NO");

#ifndef EMER_REDUCED
const u8 gText_Info4[] = _("INFO"); // Unused
#endif

const u8 gText_SingleBattle[] = _("SINGLE BATTLE");
const u8 gText_DoubleBattle[] = _("DOUBLE BATTLE");
const u8 gText_MultiBattle[] = _("MULTI BATTLE");

#ifndef EMER_REDUCED
const u8 gText_MrBriney[] = _("MR. BRINEY"); // Unused
#endif

const u8 gText_Challenge[] = _("CHALLENGE");
const u8 gText_Info3[] = _("INFO");
const u8 gText_Lv50[] = _("LV. 50");
const u8 gText_OpenLevel[] = _("OPEN LEVEL");
const u8 gText_FreshWaterAndPrice[] = _("FRESH WATER{CLEAR_TO 0x48}¥200");
const u8 gText_SodaPopAndPrice[] = _("SODA POP{CLEAR_TO 0x48}¥300");
const u8 gText_LemonadeAndPrice[] = _("LEMONADE{CLEAR_TO 0x48}¥350");
const u8 gText_HowToRide[] = _("HOW TO RIDE");
const u8 gText_HowToTurn[] = _("HOW TO TURN");
const u8 gText_SandySlopes[] = _("SANDY SLOPES");
const u8 gText_Wheelies[] = _("WHEELIES");
const u8 gText_BunnyHops[] = _("BUNNY-HOPS");
const u8 gText_Jump[] = _("JUMP");
const u8 gText_Satisfied[] = _("Satisfied");
const u8 gText_Dissatisfied[] = _("Dissatisfied");
const u8 gText_DeepSeaTooth[] = _("DEEPSEATOOTH");
const u8 gText_DeepSeaScale[] = _("DEEPSEASCALE");
const u8 gText_BlueFlute2[] = _("BLUE FLUTE");
const u8 gText_YellowFlute2[] = _("YELLOW FLUTE");
const u8 gText_RedFlute2[] = _("RED FLUTE");
const u8 gText_WhiteFlute2[] = _("WHITE FLUTE");
const u8 gText_BlackFlute2[] = _("BLACK FLUTE");
const u8 gText_GlassChair[] = _("GLASS CHAIR");
const u8 gText_GlassDesk[] = _("GLASS DESK");
const u8 gText_TreeckoDollAndPrice[] = _("TREECKO DOLL 1,000 COINS");
const u8 gText_TorchicDollAndPrice[] = _("TORCHIC DOLL 1,000 COINS");
const u8 gText_MudkipDollAndPrice[] = _("MUDKIP DOLL   1,000 COINS");
const u8 gText_50CoinsAndPrice[] = _("  50 COINS    ¥1,000");
const u8 gText_500CoinsAndPrice[] = _("500 COINS  ¥10,000");
const u8 gText_Excellent2[] = _("Excellent");
const u8 gText_NotSoGood[] = _("Not so good");
const u8 gText_RedShard[] = _("RED SHARD");
const u8 gText_YellowShard[] = _("YELLOW SHARD");
const u8 gText_BlueShard[] = _("BLUE SHARD");
const u8 gText_GreenShard[] = _("GREEN SHARD");
const u8 gText_BattleFrontier[] = _("BATTLE FRONTIER");
const u8 gText_Right[] = _("Right");
const u8 gText_Left[] = _("Left");
const u8 gText_TM32AndPrice[] = _("TM32{CLEAR_TO 0x48}1,500 COINS");
const u8 gText_TM29AndPrice[] = _("TM29{CLEAR_TO 0x48}3,500 COINS");
const u8 gText_TM35AndPrice[] = _("TM35{CLEAR_TO 0x48}4,000 COINS");
const u8 gText_TM24AndPrice[] = _("TM24{CLEAR_TO 0x48}4,000 COINS");
const u8 gText_TM13AndPrice[] = _("TM13{CLEAR_TO 0x48}4,000 COINS");
const u8 gText_Cool[] = _("COOL");
const u8 gText_Beauty[] = _("BEAUTY");
const u8 gText_Cute[] = _("CUTE");
const u8 gText_Smart[] = _("SMART");
const u8 gText_Tough[] = _("TOUGH");
const u8 gText_Normal[] = _("NORMAL");
const u8 gText_Super[] = _("SUPER");
const u8 gText_Hyper[] = _("HYPER");
const u8 gText_Master[] = _("MASTER");
const u8 gText_Cool2[] = _("COOL");
const u8 gText_Beauty2[] = _("BEAUTY");
const u8 gText_Cute2[] = _("CUTE");
const u8 gText_Smart2[] = _("SMART");
const u8 gText_Tough2[] = _("TOUGH");
const u8 gText_Items[] = _("ITEMS");
const u8 gText_Key_Items[] = _("KEY ITEMS");
const u8 gText_Poke_Balls[] = _("POKé BALLS");
const u8 gText_TMs_Hms[] = _("TMs & HMs");
const u8 gText_Berries2[] = _("BERRIES");
const u8 gText_SomeonesPC[] = _("SOMEONE'S PC");
const u8 gText_LanettesPC[] = _("LANETTE'S PC");
const u8 gText_PlayersPC[] = _("{PLAYER}'s PC");
const u8 gText_HallOfFame[] = _("HALL OF FAME");
const u8 gText_LogOff[] = _("LOG OFF");
const u8 gText_Opponent[] = _("OPPONENT");
const u8 gText_Tourney_Tree[] = _("TOURNEY TREE");
const u8 gText_ReadyToStart[] = _("READY TO START");
const u8 gText_NormalRank[] = _("NORMAL RANK");
const u8 gText_SuperRank[] = _("SUPER RANK");
const u8 gText_HyperRank[] = _("HYPER RANK");
const u8 gText_MasterRank[] = _("MASTER RANK");
const u8 gText_Single2[] = _("SINGLE");
const u8 gText_Double2[] = _("DOUBLE");
const u8 gText_Multi[] = _("MULTI");
const u8 gText_MultiLink[] = _("MULTI-LINK");
const u8 gText_BattleBag[] = _("BATTLE BAG");
const u8 gText_HeldItem[] = _("HELD ITEM");
const u8 gText_LinkContest[] = _("LINK CONTEST");
const u8 gText_AboutE_Mode[] = _("ABOUT E-MODE");
const u8 gText_AboutG_Mode[] = _("ABOUT G-MODE");
const u8 gText_E_Mode[] = _("E-MODE");
const u8 gText_G_Mode[] = _("G-MODE");
const u8 gText_MenuOptionPokedex[] = _("POKéDEX");
const u8 gText_MenuOptionPokemon[] = _("POKéMON");
const u8 gText_MenuOptionBag[] = _("BAG");
const u8 gText_MenuOptionPokenav[] = _("POKéNAV");
const u8 gText_Blank[] = _("");
const u8 gText_MenuOptionSave[] = _("SAVE");
const u8 gText_MenuOptionOption[] = _("OPTION");
const u8 gText_MenuOptionExit[] = _("EXIT");
const u8 gText_5BP[] = _("  5BP");
const u8 gText_10BP[] = _("10BP");
const u8 gText_15BP[] = _("15BP");
const u8 gText_RedTent[] = _("RED TENT");
const u8 gText_BlueTent[] = _("BLUE TENT");
const u8 gText_SouthernIsland[] = _("SOUTHERN ISLAND");
const u8 gText_BirthIsland[] = _("BIRTH ISLAND");
const u8 gText_FarawayIsland[] = _("FARAWAY ISLAND");
const u8 gText_NavelRock[] = _("NAVEL ROCK");
const u8 gText_ClawFossil[] = _("CLAW FOSSIL");
const u8 gText_RootFossil[] = _("ROOT FOSSIL");
const u8 gText_No4[] = _("NO");
const u8 gText_IllBattleNow[] = _("I'll battle now!");
const u8 gText_IWon[] = _("I won!");
const u8 gText_ILost[] = _("I lost!");
const u8 gText_IWontTell[] = _("I won't tell.");
const u8 gText_NormalTagMatch[] = _("NORMAL TAG MATCH");
const u8 gText_VarietyTagMatch[] = _("VARIETY TAG MATCH");
const u8 gText_UniqueTagMatch[] = _("UNIQUE TAG MATCH");
const u8 gText_ExpertTagMatch[] = _("EXPERT TAG MATCH");
const u8 gText_TradeCenter[] = _("TRADE CENTER");
const u8 gText_Colosseum[] = _("COLOSSEUM");
const u8 gText_RecordCorner[] = _("RECORD CORNER");
const u8 gText_BerryCrush3[] = _("BERRY CRUSH");
const u8 gText_EmptyLinkService[] = _(""); // Maybe Spin Trade?
const u8 gText_PokemonJump[] = _("POKéMON JUMP");
const u8 gText_DodrioBerryPicking[] = _("DODRIO BERRY-PICKING");
const u8 gText_BecomeLeader[] = _("BECOME LEADER");
const u8 gText_JoinGroup[] = _("JOIN GROUP");
const u8 gText_TwoStyles[] = _("TWO STYLES");
const u8 gText_Lv50_3[] = _("LV. 50");
const u8 gText_OpenLevel2[] = _("OPEN LEVEL");
const u8 gText_MonTypeAndNo[] = _("{PKMN} TYPE & NO.");
const u8 gText_HoldItems[] = _("HOLD ITEMS");
const u8 gText_Symbols2[] = _("SYMBOLS");
const u8 gText_Record3[] = _("RECORD");
const u8 gText_BattlePts[] = _("BATTLE PTS");
const u8 gText_TowerInfo[] = _("TOWER INFO");
const u8 gText_BattleMon[] = _("BATTLE {PKMN}");
const u8 gText_BattleSalon[] = _("BATTLE SALON");
const u8 gText_MultiLink2[] = _("MULTI-LINK");
const u8 gText_BattleRules[] = _("BATTLE RULES");
const u8 gText_JudgeMind[] = _("JUDGE: MIND");
const u8 gText_JudgeSkill[] = _("JUDGE: SKILL");
const u8 gText_JudgeBody[] = _("JUDGE: BODY");
const u8 gText_Matchup[] = _("MATCHUP");
const u8 gText_TourneyTree[] = _("TOURNEY TREE");
const u8 gText_DoubleKO[] = _("DOUBLE KO");
const u8 gText_BasicRules[] = _("BASIC RULES");
const u8 gText_SwapPartners[] = _("SWAP: PARTNER");
const u8 gText_SwapNumber[] = _("SWAP: NUMBER");
const u8 gText_SwapNotes[] = _("SWAP: NOTES");
const u8 gText_OpenLevel3[] = _("OPEN LEVEL");
const u8 gText_BattleBasics[] = _("BATTLE BASICS");
const u8 gText_PokemonNature[] = _("POKéMON NATURE");
const u8 gText_PokemonMoves[] = _("POKéMON MOVES");
const u8 gText_Underpowered[] = _("UNDERPOWERED");
const u8 gText_WhenInDanger[] = _("WHEN IN DANGER");
const u8 gText_PyramidPokemon[] = _("PYRAMID: POKéMON");
const u8 gText_PyramidTrainers[] = _("PYRAMID: TRAINERS");
const u8 gText_PyramidMaze[] = _("PYRAMID: MAZE");
const u8 gText_BattleBag2[] = _("BATTLE BAG");
const u8 gText_PokenavAndBag[] = _("POKéNAV AND BAG");
const u8 gText_HeldItems[] = _("HELD ITEMS");
const u8 gText_PokemonOrder[] = _("POKéMON ORDER");
const u8 gText_BattlePokemon[] = _("BATTLE POKéMON");
const u8 gText_BattleTrainers[] = _("BATTLE TRAINERS");
const u8 gText_GoOn[] = _("GO ON");
const u8 gText_Record2[] = _("RECORD");
const u8 gText_Rest[] = _("REST");
const u8 gText_Retire[] = _("RETIRE");
const u8 gText_99TimesPlus[] = _("99 times +");
const u8 gText_1MinutePlus[] = _("1 minute +");
const u8 gText_SpaceSeconds[] = _(" seconds");
const u8 gText_SpaceTimes[] = _(" time(s)");

#ifndef EMER_REDUCED
const u8 gText_Dot[] = _("."); // Unused
#endif

const u8 gText_BigGuy[] = _("Big guy");
const u8 gText_BigGirl[] = _("Big girl");
const u8 gText_Son[] = _("son");
const u8 gText_Daughter[] = _("daughter");
const u8 gText_BlueFlute[] = _("BLUE FLUTE");
const u8 gText_YellowFlute[] = _("YELLOW FLUTE");
const u8 gText_RedFlute[] = _("RED FLUTE");
const u8 gText_WhiteFlute[] = _("WHITE FLUTE");
const u8 gText_BlackFlute[] = _("BLACK FLUTE");
const u8 gText_PrettyChair[] = _("PRETTY CHAIR");
const u8 gText_PrettyDesk[] = _("PRETTY DESK");
const u8 gText_1F[] = _("1F");
const u8 gText_2F[] = _("2F");
const u8 gText_3F[] = _("3F");
const u8 gText_4F[] = _("4F");
const u8 gText_5F[] = _("5F");
const u8 gText_6F[] = _("6F");
const u8 gText_7F[] = _("7F");
const u8 gText_8F[] = _("8F");
const u8 gText_9F[] = _("9F");
const u8 gText_10F[] = _("10F");
const u8 gText_11F[] = _("11F");
const u8 gText_B1F[] = _("B1F");
const u8 gText_B2F[] = _("B2F");
const u8 gText_B3F[] = _("B3F");
const u8 gText_B4F[] = _("B4F");
const u8 gText_Rooftop[] = _("ROOFTOP");
const u8 gText_ElevatorNowOn[] = _("Now on:");
const u8 gText_BP[] = _("BP");
const u8 gText_EnergyPowder50[] = _("ENERGYPOWDER{CLEAR_TO 114}{FONT_SMALL}50");
const u8 gText_EnergyRoot80[] = _("ENERGY ROOT{CLEAR_TO 114}{FONT_SMALL}80");
const u8 gText_HealPowder50[] = _("HEAL POWDER{CLEAR_TO 114}{FONT_SMALL}50");
const u8 gText_RevivalHerb300[] = _("REVIVAL HERB{CLEAR_TO 108}{FONT_SMALL}300");
const u8 gText_Protein1000[] = _("PROTEIN{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_Iron1000[] = _("IRON{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_Carbos1000[] = _("CARBOS{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_Calcium1000[] = _("CALCIUM{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_Zinc1000[] = _("ZINC{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_HPUp1000[] = _("HP UP{CLEAR_TO 99}{FONT_SMALL}1,000");
const u8 gText_PPUp3000[] = _("PP UP{CLEAR_TO 99}{FONT_SMALL}3,000");
const u8 gText_RankingHall[] = _("RANKING HALL");
const u8 gText_ExchangeService[] = _("EXCHANGE SERVICE");
const u8 gText_LilycoveCity[] = _("LILYCOVE CITY");
const u8 gText_SlateportCity[] = _("SLATEPORT CITY");
const u8 gText_CaveOfOrigin[] = _("CAVE OF ORIGIN");
const u8 gText_MtPyre[] = _("MT. PYRE");
const u8 gText_SkyPillar[] = _("SKY PILLAR");
const u8 gText_DontRemember[] = _("Don't remember");
const u8 gText_Exit[] = _("EXIT");
const u8 gText_ExitFromBox[] = _("Exit from the BOX?");
const u8 gText_WhatDoYouWantToDo[] = _("What do you want to do?");
const u8 gText_PleasePickATheme[] = _("Please pick a theme.");
const u8 gText_PickTheWallpaper[] = _("Pick the wallpaper.");
const u8 gText_PkmnIsSelected[] = _("{DYNAMIC 0} is selected.");
const u8 gText_JumpToWhichBox[] = _("Jump to which BOX?");
const u8 gText_DepositInWhichBox[] = _("Deposit in which BOX?");
const u8 gText_PkmnWasDeposited[] = _("{DYNAMIC 0} was deposited.");
const u8 gText_BoxIsFull2[] = _("The BOX is full.");
const u8 gText_ReleaseThisPokemon[] = _("Release this POKéMON?");
const u8 gText_PkmnWasReleased[] = _("{DYNAMIC 0} was released.");
const u8 gText_ByeByePkmn[] = _("Bye-bye, {DYNAMIC 0}!");
const u8 gText_MarkYourPkmn[] = _("Mark your POKéMON.");
const u8 gText_ThatsYourLastPkmn[] = _("That's your last POKéMON!");
const u8 gText_YourPartysFull[] = _("Your party's full!");
const u8 gText_YoureHoldingAPkmn[] = _("You're holding a POKéMON!");
const u8 gText_WhichOneWillYouTake[] = _("Which one will you take?");
const u8 gText_YouCantReleaseAnEgg[] = _("You can't release an EGG.");
const u8 gText_ContinueBoxOperations[] = _("Continue BOX operations?");
const u8 gText_PkmnCameBack[] = _("{DYNAMIC 0} came back!");
const u8 gText_WasItWorriedAboutYou[] = _("Was it worried about you?");
const u8 gText_FourEllipsesExclamation[] = _("… … … … !");
const u8 gText_PleaseRemoveTheMail[] = _("Please remove the MAIL.");
const u8 gText_GiveToAPkmn[] = _("GIVE to a POKéMON?");
const u8 gText_PlacedItemInBag[] = _("Placed item in the BAG.");
const u8 gText_BagIsFull2[] = _("The BAG is full.");
const u8 gText_PutItemInBag[] = _("Put this item in the BAG?");
const u8 gText_ItemIsNowHeld[] = _("{DYNAMIC 0} is now held.");
const u8 gText_ChangedToNewItem[] = _("Changed to {DYNAMIC 0}.");
const u8 gText_MailCantBeStored[] = _("MAIL can't be stored!");
const u8 gPCText_Cancel[] = _("CANCEL");
const u8 gPCText_Store[] = _("STORE");
const u8 gPCText_Withdraw[] = _("WITHDRAW");
const u8 gPCText_Shift[] = _("SHIFT");
const u8 gPCText_Move[] = _("MOVE");
const u8 gPCText_Place[] = _("PLACE");
const u8 gPCText_Summary[] = _("SUMMARY");
const u8 gPCText_Release[] = _("RELEASE");
const u8 gPCText_Mark[] = _("MARK");
const u8 gPCText_Name[] = _("NAME");
const u8 gPCText_Jump[] = _("JUMP");
const u8 gPCText_Wallpaper[] = _("WALLPAPER");
const u8 gPCText_Take[] = _("TAKE");
const u8 gPCText_Give[] = _("GIVE");
const u8 gPCText_Switch[] = _("SWITCH");
const u8 gPCText_Bag[] = _("BAG");
const u8 gPCText_Info[] = _("INFO");
const u8 gPCText_Scenery1[] = _("SCENERY 1");
const u8 gPCText_Scenery2[] = _("SCENERY 2");
const u8 gPCText_Scenery3[] = _("SCENERY 3");
const u8 gPCText_Etcetera[] = _("ETCETERA");
const u8 gPCText_Friends[] = _("FRIENDS");
const u8 gPCText_Forest[] = _("FOREST");
const u8 gPCText_City[] = _("CITY");
const u8 gPCText_Desert[] = _("DESERT");
const u8 gPCText_Savanna[] = _("SAVANNA");
const u8 gPCText_Crag[] = _("CRAG");
const u8 gPCText_Volcano[] = _("VOLCANO");
const u8 gPCText_Snow[] = _("SNOW");
const u8 gPCText_Cave[] = _("CAVE");
const u8 gPCText_Beach[] = _("BEACH");
const u8 gPCText_Seafloor[] = _("SEAFLOOR");
const u8 gPCText_River[] = _("RIVER");
const u8 gPCText_Sky[] = _("SKY");
const u8 gPCText_PolkaDot[] = _("POLKA-DOT");
const u8 gPCText_Pokecenter[] = _("POKéCENTER");
const u8 gPCText_Machine[] = _("MACHINE");
const u8 gPCText_Simple[] = _("SIMPLE");

#ifndef EMER_REDUCED
const u8 gText_WhatWouldYouLikeToDo[] = _("What would you like to do?"); // Unused
#endif

const u8 gText_WithdrawPokemon[] = _("WITHDRAW POKéMON");
const u8 gText_DepositPokemon[] = _("DEPOSIT POKéMON");
const u8 gText_MovePokemon[] = _("MOVE POKéMON");
const u8 gText_MoveItems[] = _("MOVE ITEMS");
const u8 gText_SeeYa[] = _("SEE YA!");
const u8 gText_WithdrawMonDescription[] = _("Move POKéMON stored in BOXES to\nyour party.");
const u8 gText_DepositMonDescription[] = _("Store POKéMON in your party in BOXES.");
const u8 gText_MoveMonDescription[] = _("Organize the POKéMON in BOXES and\nin your party.");
const u8 gText_MoveItemsDescription[] = _("Move items held by any POKéMON\nin a BOX or your party.");
const u8 gText_SeeYaDescription[] = _("Return to the previous menu.");
const u8 gText_JustOnePkmn[] = _("There is just one POKéMON with you.");
const u8 gText_PartyFull[] = _("Your party is full!");
const u8 gText_Box[] = _("BOX");
const u8 gText_CheckMapOfHoenn[] = _("Check the map of the HOENN region.");
const u8 gText_CheckPokemonInDetail[] = _("Check POKéMON in detail.");
const u8 gText_CallRegisteredTrainer[] = _("Call a registered TRAINER.");
const u8 gText_CheckObtainedRibbons[] = _("Check obtained RIBBONS.");
const u8 gText_PutAwayPokenav[] = _("Put away the POKéNAV.");
const u8 gText_NoRibbonWinners[] = _("There are no RIBBON winners.");

#ifndef EMER_REDUCED
const u8 gText_NoTrainersRegistered[] = _("No TRAINERS are registered."); // Unused
#endif

const u8 gText_CheckPartyPokemonInDetail[] = _("Check party POKéMON in detail.");
const u8 gText_CheckAllPokemonInDetail[] = _("Check all POKéMON in detail.");
const u8 gText_ReturnToPokenavMenu[] = _("Return to the POKéNAV menu.");
const u8 gText_FindCoolPokemon[] = _("Find cool POKéMON.");
const u8 gText_FindBeautifulPokemon[] = _("Find beautiful POKéMON.");
const u8 gText_FindCutePokemon[] = _("Find cute POKéMON.");
const u8 gText_FindSmartPokemon[] = _("Find smart POKéMON.");
const u8 gText_FindToughPokemon[] = _("Find tough POKéMON.");
const u8 gText_ReturnToConditionMenu[] = _("Return to the CONDITION menu.");
const u8 gText_NumberRegistered[] = _("No. registered");
const u8 gText_NumberOfBattles[] = _("No. of battles");

#ifndef EMER_REDUCED
const u8 gText_Detail[] = _("DETAIL"); // Unused
const u8 gText_Call2[] = _("CALL"); // Unused
const u8 gText_UnusedExit[] = _("EXIT"); // Unused
const u8 gText_CantCallOpponentHere[] = _("Can't call opponent here."); // Unused
#endif

const u8 gText_PokenavMatchCall_Strategy[] = _("STRATEGY");
const u8 gText_PokenavMatchCall_TrainerPokemon[] = _("TRAINER'S POKéMON");
const u8 gText_PokenavMatchCall_SelfIntroduction[] = _("SELF-INTRODUCTION");
const u8 gText_Pokenav_ClearButtonList[] = _("{CLEAR 0x80}");
const u8 gText_PokenavMap_ZoomedOutButtons[] = _("{A_BUTTON}ZOOM {B_BUTTON}CANCEL");
const u8 gText_PokenavMap_ZoomedInButtons[] = _("{A_BUTTON}FULL {B_BUTTON}CANCEL");
const u8 gText_PokenavCondition_MonListButtons[] = _("{A_BUTTON}CONDITION {B_BUTTON}CANCEL");
const u8 gText_PokenavCondition_MonStatusButtons[] = _("{A_BUTTON}MARKINGS {B_BUTTON}CANCEL");
const u8 gText_PokenavCondition_MarkingButtons[] = _("{A_BUTTON}SELECT MARK {B_BUTTON}CANCEL");
const u8 gText_PokenavMatchCall_TrainerListButtons[] = _("{A_BUTTON}MENU {B_BUTTON}CANCEL");
const u8 gText_PokenavMatchCall_CallMenuButtons[] = _("{A_BUTTON}OK {B_BUTTON}CANCEL");
const u8 gText_PokenavMatchCall_CheckTrainerButtons[] = _("{B_BUTTON}CANCEL");
const u8 gText_PokenavRibbons_MonListButtons[] = _("{A_BUTTON}RIBBONS {B_BUTTON}CANCEL");
const u8 gText_PokenavRibbons_RibbonListButtons[] = _("{A_BUTTON}CHECK {B_BUTTON}CANCEL");
const u8 gText_PokenavRibbons_RibbonCheckButtons[] = _("{B_BUTTON}CANCEL");
const u8 gText_NatureSlash[] = _("NATURE/");
const u8 gText_TrainerCloseBy[] = _("That TRAINER is close by.\nTalk to the TRAINER in person!");
const u8 gText_InParty[] = _("IN PARTY");
const u8 gText_Number2[] = _("No. ");

#ifndef EMER_REDUCED
const u8 gText_Ribbons[] = _("RIBBONS"); // Unused
const u8 gText_PokemonMaleLv[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_RED WHITE GREEN}♂{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}"); // Unused
const u8 gText_PokemonFemaleLv[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_GREEN WHITE BLUE}♀{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}"); // Unused
const u8 gText_PokemonNoGenderLv[] = _("{DYNAMIC 0}/{LV}{DYNAMIC 1}"); // Unused
#endif

const u8 gText_Unknown[] = _("UNKNOWN");
const u8 gText_Call[] = _("CALL");
const u8 gText_Check[] = _("CHECK");
const u8 gText_Cancel6[] = _("CANCEL");
const u8 gText_NumberIndex[] = _("No. {DYNAMIC 0}");
const u8 gText_RibbonsF700[] = _("RIBBONS {DYNAMIC 0}");

#ifndef EMER_REDUCED
const u8 gText_PokemonMaleLv2[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_RED WHITE GREEN}♂{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
const u8 gText_PokemonFemaleLv2[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_GREEN WHITE BLUE}♀{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
const u8 gText_PokemonNoGenderLv2[] = _("{DYNAMIC 0}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
#endif

const u8 gText_CombineFourWordsOrPhrases[] = _("Combine four words or phrases");
const u8 gText_AndMakeYourProfile[] = _("and make your profile.");
const u8 gText_CombineSixWordsOrPhrases[] = _("Combine six words or phrases");
const u8 gText_AndMakeAMessage[] = _("and make a message.");
const u8 gText_FindWordsThatDescribeYour[] = _("Find words that describe your");
const u8 gText_FeelingsRightNow[] = _("feelings right now.");

#ifndef EMER_REDUCED
const u8 gText_WithFourPhrases[] = _("With four phrases,"); // Unused
#endif

const u8 gText_CombineNineWordsOrPhrases[] = _("Combine nine words or phrases");
const u8 gText_AndMakeAMessage2[] = _("and make a message.");
const u8 gText_ChangeJustOneWordOrPhrase[] = _("Change just one word or phrase");
const u8 gText_AndImproveTheBardsSong[] = _("and improve the BARD's song.");
const u8 gText_YourProfile[] = _("Your profile");
const u8 gText_YourFeelingAtTheBattlesStart[] = _("Your feeling at the battle's start");
const u8 gText_WhatYouSayIfYouWin[] = _("What you say if you win a battle");
const u8 gText_WhatYouSayIfYouLose[] = _("What you say if you lose a battle");
const u8 gText_TheAnswer[] = _("The answer");
const u8 gText_TheMailMessage[] = _("The MAIL message");

#ifndef EMER_REDUCED
const u8 gText_TheMailSalutation[] = _("The MAIL salutation"); // Unused
#endif

const u8 gText_TheBardsSong2[] = _("The new song");
const u8 gText_CombineTwoWordsOrPhrases[] = _("Combine two words or phrases");
const u8 gText_AndMakeATrendySaying[] = _("and make a trendy saying.");
const u8 gText_TheTrendySaying[] = _("The trendy saying");
const u8 gText_IsAsShownOkay[] = _("is as shown. Okay?");
const u8 gText_CombineTwoWordsOrPhrases2[] = _("Combine two words or phrases");
const u8 gText_ToTeachHerAGoodSaying[] = _("to teach her a good saying.");
const u8 gText_FindWordsWhichFit[] = _("Find words which fit");
const u8 gText_TheTrainersImage[] = _("the TRAINER's image.");
const u8 gText_TheImage[] = _("The image:");
const u8 gText_OutOfTheListedChoices[] = _("Out of the listed choices,");
const u8 gText_SelectTheAnswerToTheQuiz[] = _("select the answer to the quiz!");
const u8 gText_AndCreateAQuiz[] = _("and create a quiz!");
const u8 gText_PickAWordOrPhraseAnd[] = _("Pick a word or phrase and");
const u8 gText_SetTheQuizAnswer[] = _("set the quiz answer.");
const u8 gText_TheAnswerColon[] = _("The answer:");

#ifndef EMER_REDUCED
const u8 gText_TheQuizColon[] = _("The quiz:"); // Unused
#endif

const u8 gText_ApprenticePhrase[] = _("Apprentice's phrase:");
const u8 gText_QuitEditing[] = _("Quit editing?");
const u8 gText_StopGivingPkmnMail[] = _("Stop giving the POKéMON MAIL?");
const u8 gText_AndFillOutTheQuestionnaire[] = _("and fill out the questionnaire.");
const u8 gText_LetsReplyToTheInterview[] = _("Let's reply to the interview!");
const u8 gText_AllTextBeingEditedWill[] = _("All the text being edited will");
const u8 gText_BeDeletedThatOkay[] = _("be deleted. Is that okay?");

#ifndef EMER_REDUCED
const u8 gText_QuitEditing2[] = _("Quit editing?"); // Unused
const u8 gText_EditedTextWillNotBeSaved[] = _("The edited text will not be saved."); // Unused
const u8 gText_IsThatOkay[] = _("Is that okay?"); // Unused
const u8 gText_PleaseEnterPhraseOrWord[] = _("Please enter a phrase or word."); // Unused
#endif

const u8 gText_EntireTextCantBeDeleted[] = _("The entire text can't be deleted.");
const u8 gText_OnlyOnePhrase[] = _("Only one phrase may be changed.");
const u8 gText_OriginalSongWillBeUsed[] = _("The original song will be used.");

#ifndef EMER_REDUCED
const u8 gText_ThatsTrendyAlready[] = _("That's trendy already!"); // Unused
#endif

const u8 gText_CombineTwoWordsOrPhrases3[] = _("Combine two words or phrases.");

#ifndef EMER_REDUCED
const u8 gText_QuitGivingInfo[] = _("Quit giving information?"); // Unused
const u8 gText_StopGivingPkmnMail2[] = _("Stop giving the POKéMON MAIL?"); // Unused
const u8 gText_CreateAQuiz2[] = _("Create a quiz!"); // Unused
const u8 gText_SetTheAnswer[] = _("Set the answer!"); // Unused
const u8 gText_CancelSelection[] = _("Cancel the selection?"); // Unused
#endif

const u8 gText_Profile[] = _("PROFILE");
const u8 gText_AtTheBattlesStart[] = _("At the battle's start:");
const u8 gText_UponWinningABattle[] = _("Upon winning a battle:");
const u8 gText_UponLosingABattle[] = _("Upon losing a battle:");
const u8 gText_TheBardsSong[] = _("The BARD's Song");
const u8 gText_WhatsHipAndHappening[] = _("What's hip and happening?");
const u8 gText_Interview[] = _("Interview");
const u8 gText_GoodSaying[] = _("Good saying");
const u8 gText_FansQuestion[] = _("Fan's question");

#ifndef EMER_REDUCED
const u8 gJPText_WhatIsTheQuizAnswer[] = _("クイズの こたえは？"); // Unused
#endif

const u8 gText_ApprenticesPhrase[] = _("Apprentice's phrase");
const u8 gText_Questionnaire[] = _("QUESTIONNAIRE");
const u8 gText_YouCannotQuitHere[] = _("You cannot quit here.");
const u8 gText_SectionMustBeCompleted[] = _("This section must be completed.");
const u8 gText_F700sQuiz[] = _("{DYNAMIC 0}'s quiz");
const u8 gText_Lady[] = _("Lady");
const u8 gText_AfterYouHaveReadTheQuiz[] = _("After you have read the quiz");
const u8 gText_QuestionPressTheAButton[] = _("question, press the A Button.");
const u8 gText_TheQuizAnswerIs[] = _("The quiz answer is?");
const u8 gText_LikeToQuitQuiz[] = _("Would you like to quit this quiz");
const u8 gText_ChallengeQuestionMark[] = _("challenge?");
const u8 gText_IsThisQuizOK[] = _("Is this quiz OK?");
const u8 gText_CreateAQuiz[] = _("Create a quiz!");
const u8 gText_SelectTheAnswer[] = _("Select the answer!");
const u8 gText_LyricsCantBeDeleted[] = _("The lyrics can't be deleted.");
const u8 gText_PokemonLeague[] = _("POKéMON LEAGUE");
const u8 gText_PokemonCenter[] = _("POKéMON CENTER");
const u8 gText_GetsAPokeBlockQuestion[] = _(" gets a {POKEBLOCK}?");
const u8 gText_Coolness[] = _("Coolness ");
const u8 gText_Beauty3[] = _("Beauty ");
const u8 gText_Cuteness[] = _("Cuteness ");
const u8 gText_Smartness[] = _("Smartness ");
const u8 gText_Toughness[] = _("Toughness ");
const u8 gText_WasEnhanced[] = _("was enhanced!");
const u8 gText_NothingChanged[] = _("Nothing changed!");
const u8 gText_WontEatAnymore[] = _("It won't eat anymore…");
const u8 gText_SaveFailedCheckingBackup[] = _("Save failed. Checking the backup\nmemory… Please wait.\n{COLOR RED}“Time required: about 1 minute”");
const u8 gText_BackupMemoryDamaged[] = _("The backup memory is damaged, or\nthe internal battery has run dry.\nYou can still play, but not save.");
const u8 gText_GamePlayCannotBeContinued[] = _("{COLOR RED}“Game play cannot be continued.\nReturning to the title screen…”");
const u8 gText_CheckCompleted[] = _("Check completed.\nAttempting to save again.\nPlease wait.");
const u8 gText_SaveCompleteGameCannotContinue[] = _("Save completed.\n{COLOR RED}“Game play cannot be continued.\nReturning to the title screen.”");
const u8 gText_SaveCompletePressA[] = _("Save completed.\n{COLOR RED}“Please press the A Button.”");
const u8 gText_Ferry[] = _("FERRY");
const u8 gText_SecretBase[] = _("SECRET BASE");
const u8 gText_Hideout[] = _("HIDEOUT");
const u8 gText_ResetRTCConfirmCancel[] = _("Reset RTC?\nA: Confirm, B: Cancel");
const u8 gText_PresentTime[] = _("Present time in game");
const u8 gText_PreviousTime[] = _("Previous time in game");
const u8 gText_PleaseResetTime[] = _("Please reset the time.");
const u8 gText_ClockHasBeenReset[] = _("The clock has been reset.\nData will be saved. Please wait.");
const u8 gText_SaveCompleted[] = _("Save completed.");
const u8 gText_SaveFailed[] = _("Save failed…");
const u8 gText_NoSaveFileCantSetTime[] = _("There is no save file, so the time\ncan't be set.");
const u8 gText_InGameClockUsable[] = _("The in-game clock adjustment system\nis now useable.");
const u8 gText_Slots[] = _("SLOTS");
const u8 gText_Roulette[] = _("ROULETTE");
const u8 gText_Good[] = _("Good");
const u8 gText_VeryGood[] = _("Very good");
const u8 gText_Excellent[] = _("Excellent");
const u8 gText_SoSo[] = _("So-so");
const u8 gText_Bad[] = _("Bad");
const u8 gText_TheWorst[] = _("The worst");
const u8 gText_Spicy2[] = _("spicy");
const u8 gText_Dry2[] = _("dry");
const u8 gText_Sweet2[] = _("sweet");
const u8 gText_Bitter2[] = _("bitter");
const u8 gText_Sour2[] = _("sour");
const u8 gText_Single[] = _("SINGLE");
const u8 gText_Double[] = _("DOUBLE");
const u8 gText_Jackpot[] = _("jackpot");
const u8 gText_First[] = _("first");
const u8 gText_Second[] = _("second");
const u8 gText_Third[] = _("third");
const u8 gText_0Pts[] = _("0 pts");
const u8 gText_10Pts[] = _("10 pts");
const u8 gText_20Pts[] = _("20 pts");
const u8 gText_30Pts[] = _("30 pts");
const u8 gText_40Pts[] = _("40 pts");
const u8 gText_50Pts[] = _("50 pts");
const u8 gText_60Pts[] = _("60 pts");
const u8 gText_70Pts[] = _("70 pts");
const u8 gText_80Pts[] = _("80 pts");
const u8 gText_90Pts[] = _("90 pts");
const u8 gText_100Pts[] = _("100 pts");
const u8 gText_QuestionMark[] = _("?");
const u8 gText_KissPoster16BP[] = _("KISS POSTER{CLEAR_TO 0x5E}16BP");
const u8 gText_KissCushion32BP[] = _("KISS CUSHION{CLEAR_TO 0x5E}32BP");
const u8 gText_SmoochumDoll32BP[] = _("SMOOCHUM DOLL{CLEAR_TO 0x5E}32BP");
const u8 gText_TogepiDoll48BP[] = _("TOGEPI DOLL{CLEAR_TO 0x5E}48BP");
const u8 gText_MeowthDoll48BP[] = _("MEOWTH DOLL{CLEAR_TO 0x5E}48BP");
const u8 gText_ClefairyDoll48BP[] = _("CLEFAIRY DOLL{CLEAR_TO 0x5E}48BP");
const u8 gText_DittoDoll48BP[] = _("DITTO DOLL{CLEAR_TO 0x5E}48BP");
const u8 gText_CyndaquilDoll80BP[] = _("CYNDAQUIL DOLL{CLEAR_TO 0x5E}80BP");
const u8 gText_ChikoritaDoll80BP[] = _("CHIKORITA DOLL{CLEAR_TO 0x5E}80BP");
const u8 gText_TotodileDoll80BP[] = _("TOTODILE DOLL{CLEAR_TO 0x5E}80BP");
const u8 gText_LaprasDoll128BP[] = _("LAPRAS DOLL{CLEAR_TO 0x58}128BP");
const u8 gText_SnorlaxDoll128BP[] = _("SNORLAX DOLL{CLEAR_TO 0x58}128BP");
const u8 gText_VenusaurDoll256BP[] = _("VENUSAUR DOLL{CLEAR_TO 0x58}256BP");
const u8 gText_CharizardDoll256BP[] = _("CHARIZARD DOLL{CLEAR_TO 0x58}256BP");
const u8 gText_BlastoiseDoll256BP[] = _("BLASTOISE DOLL{CLEAR_TO 0x58}256BP");
const u8 gText_Protein1BP[] = _("PROTEIN{CLEAR_TO 0x64}1BP");
const u8 gText_Calcium1BP[] = _("CALCIUM{CLEAR_TO 0x64}1BP");
const u8 gText_Iron1BP[] = _("IRON{CLEAR_TO 0x64}1BP");
const u8 gText_Zinc1BP[] = _("ZINC{CLEAR_TO 0x64}1BP");
const u8 gText_Carbos1BP[] = _("CARBOS{CLEAR_TO 0x64}1BP");
const u8 gText_HpUp1BP[] = _("HP UP{CLEAR_TO 0x64}1BP");
const u8 gText_Leftovers48BP[] = _("LEFTOVERS{CLEAR_TO 0x5E}48BP");
const u8 gText_WhiteHerb48BP[] = _("WHITE HERB{CLEAR_TO 0x5E}48BP");
const u8 gText_QuickClaw48BP[] = _("QUICK CLAW{CLEAR_TO 0x5E}48BP");
const u8 gText_MentalHerb48BP[] = _("MENTAL HERB{CLEAR_TO 0x5E}48BP");
const u8 gText_BrightPowder64BP[] = _("BRIGHTPOWDER{CLEAR_TO 0x5E}64BP");
const u8 gText_ChoiceBand64BP[] = _("CHOICE BAND{CLEAR_TO 0x5E}64BP");
const u8 gText_KingsRock64BP[] = _("KING'S ROCK{CLEAR_TO 0x5E}64BP");
const u8 gText_FocusBand64BP[] = _("FOCUS BAND{CLEAR_TO 0x5E}64BP");
const u8 gText_ScopeLens64BP[] = _("SCOPE LENS{CLEAR_TO 0x5E}64BP");
const u8 gText_Softboiled16BP[] = _("SOFTBOILED{CLEAR_TO 0x4E}16BP");
const u8 gText_SeismicToss24BP[] = _("SEISMIC TOSS{CLEAR_TO 0x4E}24BP");
const u8 gText_DreamEater24BP[] = _("DREAM EATER{CLEAR_TO 0x4E}24BP");
const u8 gText_MegaPunch24BP[] = _("MEGA PUNCH{CLEAR_TO 0x4E}24BP");
const u8 gText_MegaKick48BP[] = _("MEGA KICK{CLEAR_TO 0x4E}48BP");
const u8 gText_BodySlam48BP[] = _("BODY SLAM{CLEAR_TO 0x4E}48BP");
const u8 gText_RockSlide48BP[] = _("ROCK SLIDE{CLEAR_TO 0x4E}48BP");
const u8 gText_Counter48BP[] = _("COUNTER{CLEAR_TO 0x4E}48BP");
const u8 gText_ThunderWave48BP[] = _("THUNDER WAVE{CLEAR_TO 0x4E}48BP");
const u8 gText_SwordsDance48BP[] = _("SWORDS DANCE{CLEAR_TO 0x4E}48BP");
const u8 gText_DefenseCurl16BP[] = _("DEFENSE CURL{CLEAR_TO 0x4E}16BP");
const u8 gText_Snore24BP[] = _("SNORE{CLEAR_TO 0x4E}24BP");
const u8 gText_MudSlap24BP[] = _("MUD-SLAP{CLEAR_TO 0x4E}24BP");
const u8 gText_Swift24BP[] = _("SWIFT{CLEAR_TO 0x4E}24BP");
const u8 gText_IcyWind24BP[] = _("ICY WIND{CLEAR_TO 0x4E}24BP");
const u8 gText_Endure48BP[] = _("ENDURE{CLEAR_TO 0x4E}48BP");
const u8 gText_PsychUp48BP[] = _("PSYCH UP{CLEAR_TO 0x4E}48BP");
const u8 gText_IcePunch48BP[] = _("ICE PUNCH{CLEAR_TO 0x4E}48BP");
const u8 gText_ThunderPunch48BP[] = _("THUNDERPUNCH{CLEAR_TO 0x4E}48BP");
const u8 gText_FirePunch48BP[] = _("FIRE PUNCH{CLEAR_TO 0x4E}48BP");
const u8 gText_PkmnFainted_FldPsn[] = _("{STR_VAR_1} fainted…\p\n");
const u8 gText_Marco[] = _("MARCO");
const u8 gText_TrainerCardName[] = _("NAME: ");
const u8 gText_TrainerCardIDNo[] = _("IDNo.");
const u8 gText_TrainerCardMoney[] = _("MONEY");

#ifndef EMER_REDUCED
const u8 gText_PokeDollar[] = _("¥"); // Unused
#endif

const u8 gText_TrainerCardPokedex[] = _("POKéDEX");
const u8 gText_EmptyString6[] = _("");
const u8 gText_Colon2[] = _(":");

#ifndef EMER_REDUCED
const u8 gText_Points[] = _(" points"); // Unused
#endif

const u8 gText_TrainerCardTime[] = _("TIME");

#ifndef EMER_REDUCED
const u8 gJPText_BattlePoints[] = _("ゲ-ムポイント"); // Unused. Name presumed, translation is Game Points
#endif

const u8 gText_Var1sTrainerCard[] = _("{STR_VAR_1}'s TRAINER CARD");
const u8 gText_HallOfFameDebut[] = _("HALL OF FAME DEBUT  ");
const u8 gText_LinkBattles[] = _("LINK BATTLES");
const u8 gText_LinkCableBattles[] = _("LINK CABLE BATTLES");
const u8 gText_WinsLosses[] = _("W:{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}  L:{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}");
const u8 gText_PokemonTrades[] = _("POKéMON TRADES");
const u8 gText_UnionTradesAndBattles[] = _("UNION TRADES & BATTLES");
const u8 gText_BerryCrush[] = _("BERRY CRUSH");
const u8 gText_WaitingTrainerFinishReading[] = _("Waiting for the other TRAINER to\nfinish reading your TRAINER CARD.");
const u8 gText_PokeblocksWithFriends[] = _("{POKEBLOCK}S W/FRIENDS");
const u8 gText_NumPokeblocks[] = _("{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}");
const u8 gText_WonContestsWFriends[] = _("WON CONTESTS W/FRIENDS");
const u8 gText_BattlePtsWon[] = _("BATTLE POINTS WON");
const u8 gText_NumBP[] = _("{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}BP");
const u8 gText_BattleTower[] = _("BATTLE TOWER");
const u8 gText_WinsStraight[] = _("W/{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}  STRAIGHT/{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}");
const u8 gText_BattleTower2[] = _("BATTLE TOWER");
const u8 gText_BattleDome[] = _("BATTLE DOME");
const u8 gText_BattlePalace[] = _("BATTLE PALACE");
const u8 gText_BattleFactory[] = _("BATTLE FACTORY");
const u8 gText_BattleArena[] = _("BATTLE ARENA");
const u8 gText_BattlePike[] = _("BATTLE PIKE");
const u8 gText_BattlePyramid[] = _("BATTLE PYRAMID");

ALIGNED(4) const u8 gText_FacilitySingle[] = _("{STR_VAR_1} SINGLE");
ALIGNED(4) const u8 gText_FacilityDouble[] = _("{STR_VAR_1} DOUBLE");
ALIGNED(4) const u8 gText_FacilityMulti[] = _("{STR_VAR_1} MULTI");
ALIGNED(4) const u8 gText_FacilityLink[] = _("{STR_VAR_1} LINK");
ALIGNED(4) const u8 gText_Facility[] = _("{STR_VAR_1}");

const u8 gText_Give[] = _("Give");
const u8 gText_NoNeed[] = _("No need");
const u8 gText_ColorLightShadowDarkGray[] = _("{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}");
const u8 gText_ColorBlue[] = _("{COLOR BLUE}");
const u8 gText_ColorTransparent[] = _("{HIGHLIGHT TRANSPARENT}{COLOR TRANSPARENT}");
const u8 gText_CDot[] = _("C.");
const u8 gText_BDot[] = _("B.");
const u8 gText_AnnouncingResults[] = _("Announcing the results!");
const u8 gText_PreliminaryResults[] = _("The preliminary results!");
const u8 gText_Round2Results[] = _("Round 2 results!");
const u8 gText_ContestantsMonWon[] = _("{STR_VAR_1}'s {STR_VAR_2} won!");
const u8 gText_CommunicationStandby[] = _("Communication standby…");
const u8 gText_ColorDarkGray[] = _("{COLOR DARK_GRAY}");

#ifndef EMER_REDUCED
const u8 gText_ColorDynamic6WhiteDynamic5[] = _("{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR6 WHITE DYNAMIC_COLOR5}"); // Unused
#endif

const u8 gText_HealthboxNickname[] = _("{HIGHLIGHT DARK_GRAY}");

#ifndef EMER_REDUCED
const u8 gText_EmptySpace2[] = _(" "); // Unused
#endif

const u8 gText_HealthboxGender_Male[] = _("{COLOR DYNAMIC_COLOR2}♂");
const u8 gText_HealthboxGender_Female[] = _("{COLOR DYNAMIC_COLOR1}♀");
const u8 gText_HealthboxGender_None[] = _("{COLOR DYNAMIC_COLOR2}");
const u8 gText_Upper[] = _("UPPER");
const u8 gText_Lower[] = _("lower");
const u8 gText_Others[] = _("OTHERS");
const u8 gText_Symbols[] = _("SYMBOLS");
const u8 gText_Register2[] = _("REGISTER");
const u8 gText_Exit2[] = _("EXIT");
const u8 gText_QuitChatting[] = _("Quit chatting?");
const u8 gText_RegisterTextWhere[] = _("Register text where?");
const u8 gText_RegisterTextHere[] = _("Register text here?");
const u8 gText_InputText[] = _("Input text.");
const u8 gText_F700JoinedChat[] = _("{DYNAMIC 0} joined the chat!");
const u8 gText_F700LeftChat[] = _("{DYNAMIC 0} left the chat.");

#ifndef EMER_REDUCED
const u8 gJPText_PlayersXPokemon[] = _("{DYNAMIC 0}の{DYNAMIC 1}ひきめ:"); // Unused
const u8 gJPText_PlayersXPokmonDoesNotExist[] = _("{DYNAMIC 0}の{DYNAMIC 1}ひきめは いません"); // Unused
#endif

const u8 gText_ExitingChat[] = _("Exiting the chat…");
const u8 gText_LeaderLeftEndingChat[] = _("The LEADER, {DYNAMIC 0}, has\nleft, ending the chat.");
const u8 gText_RegisteredTextChangedOKToSave[] = _("The registered text has been changed.\nIs it okay to save the game?");
const u8 gText_AlreadySavedFile_Chat[] = _("There is already a saved file.\nIs it okay to overwrite it?");
const u8 gText_SavingDontTurnOff_Chat[] = _("SAVING…\nDON'T TURN OFF THE POWER.");
const u8 gText_PlayerSavedGame_Chat[] = _("{DYNAMIC 0} saved the game.");
const u8 gText_IfLeaderLeavesChatEnds[] = _("If the LEADER leaves, the chat\nwill end. Is that okay?");
const u8 gText_Hello[] = _("HELLO");
const u8 gText_Pokemon2[] = _("POKéMON");
const u8 gText_Trade[] = _("TRADE");
const u8 gText_Battle[] = _("BATTLE");
const u8 gText_Lets[] = _("LET'S");
const u8 gText_Ok[] = _("OK!");
const u8 gText_Sorry[] = _("SORRY");
const u8 gText_YaySmileEmoji[] = _("YAY{EMOJI_BIGSMILE}");
const u8 gText_ThankYou[] = _("THANK YOU");
const u8 gText_ByeBye[] = _("BYE-BYE!");
const u8 gText_MatchCallSteven_Strategy[] = _("Attack the weak points!");
const u8 gText_MatchCallSteven_Pokemon[] = _("Ultimate STEEL POKéMON.");
const u8 gText_MatchCallSteven_Intro1_BeforeMeteorFallsBattle[] = _("I'd climb even waterfalls");
const u8 gText_MatchCallSteven_Intro2_BeforeMeteorFallsBattle[] = _("to find a rare stone!");
const u8 gText_MatchCallSteven_Intro1_AfterMeteorFallsBattle[] = _("I'm the strongest and most");
const u8 gText_MatchCallSteven_Intro2_AfterMeteorFallsBattle[] = _("energetic after all!");
const u8 gText_MatchCallBrendan_Strategy[] = _("Battle with knowledge!");
const u8 gText_MatchCallBrendan_Pokemon[] = _("I will use various POKéMON.");
const u8 gText_MatchCallBrendan_Intro1[] = _("I'll be a better POKéMON");
const u8 gText_MatchCallBrendan_Intro2[] = _("prof than my father is!");
const u8 gText_MatchCallMay_Strategy[] = _("I'm not so good at battles.");
const u8 gText_MatchCallMay_Pokemon[] = _("I'll use any POKéMON!");
const u8 gText_MatchCallMay_Intro1[] = _("My POKéMON and I help");
const u8 gText_MatchCallMay_Intro2[] = _("my father's research.");
const u8 gText_HatchedFromEgg[] = _("{STR_VAR_1} hatched from the EGG!");
const u8 gText_NicknameHatchPrompt[] = _("Would you like to nickname the newly\nhatched {STR_VAR_1}?");
ALIGNED(4) const u8 gText_ReadyPickBerry[] = _("Are you ready to BERRY-CRUSH?\nPlease pick a BERRY for use.\p");
ALIGNED(4) const u8 gText_WaitForAllChooseBerry[] = _("Please wait while each member\nchooses a BERRY.");
ALIGNED(4) const u8 gText_EndedWithXUnitsPowder[] = _("{PAUSE_MUSIC}{PLAY_BGM MUS_LEVEL_UP}You ended up with {STR_VAR_1} units of\nsilky-smooth BERRY POWDER.{RESUME_MUSIC}\pYour total amount of BERRY POWDER\nis {STR_VAR_2}.\p");
ALIGNED(4) const u8 gText_RecordingGameResults[] = _("Recording your game results in the\nsave file.\lPlease wait.");
ALIGNED(4) const u8 gText_PlayBerryCrushAgain[] = _("Want to play BERRY CRUSH again?");
ALIGNED(4) const u8 gText_YouHaveNoBerries[] = _("You have no BERRIES.\nThe game will be canceled.");
ALIGNED(4) const u8 gText_MemberDroppedOut[] = _("A member dropped out.\nThe game will be canceled.");
ALIGNED(4) const u8 gText_TimesUpNoGoodPowder[] = _("Time's up.\pGood BERRY POWDER could not be\nmade…\p");
ALIGNED(4) const u8 gText_CommunicationStandby2[] = _("Communication standby…");
ALIGNED(4) const u8 gText_1DotBlueF700[] = _("1. {COLOR BLUE}{SHADOW LIGHT_BLUE}{DYNAMIC 0}");
ALIGNED(4) const u8 gText_1DotF700[] = _("1. {DYNAMIC 0}");
ALIGNED(4) const u8 gText_SpaceTimes2[] = _(" time(s)");
ALIGNED(4) const u8 gText_XDotY[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4) const u8 gText_Var1Berry[] = _("{STR_VAR_1} BERRY");
ALIGNED(4) const u8 gText_TimeColon[] = _("Time:");
ALIGNED(4) const u8 gText_PressingSpeed[] = _("Pressing Speed:");
ALIGNED(4) const u8 gText_Silkiness[] = _("Silkiness:");
ALIGNED(4) const u8 gText_StrVar1[] = _("{STR_VAR_1}");
ALIGNED(4) const u8 gText_SpaceMin[] = _(" min. ");
ALIGNED(4) const u8 gText_XDotY2[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4) const u8 gText_SpaceSec[] = _(" sec.");
ALIGNED(4) const u8 gText_XDotY3[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4) const u8 gText_TimesPerSec[] = _(" Times/sec.");
ALIGNED(4) const u8 gText_Var1Percent[] = _("{STR_VAR_1}%");
ALIGNED(4) const u8 gText_PressesRankings[] = _("No. of Presses Rankings");
ALIGNED(4) const u8 gText_CrushingResults[] = _("Crushing Results");
ALIGNED(4) const u8 gText_NeatnessRankings[] = _("Neatness Rankings");
ALIGNED(4) const u8 gText_CoopRankings[] = _("Cooperative Rankings");
ALIGNED(4) const u8 gText_PressingPowerRankings[] = _("Pressing-Power Rankings");
const u8 gText_BerryCrush2[] = _("BERRY CRUSH");
const u8 gText_PressingSpeedRankings[] = _("Pressing-Speed Rankings");
const u8 gText_Var1Players[] = _("{STR_VAR_1} PLAYERS");
const u8 gText_SymbolsEarned[] = _("Symbols Earned");
const u8 gText_BattleRecord[] = _("Battle Record");
const u8 gText_BattlePoints[] = _("Battle Points");

#ifndef EMER_REDUCED
const u8 gText_UnusedCancel[] = _("CANCEL"); // Unused
#endif

const u8 gText_EmptyString7[] = _("");
const u8 gText_CheckFrontierMap[] = _("Check BATTLE FRONTIER MAP.");
const u8 gText_CheckTrainerCard[] = _("Check TRAINER CARD.");
const u8 gText_ViewRecordedBattle[] = _("View recorded battle.");
const u8 gText_PutAwayFrontierPass[] = _("Put away the FRONTIER PASS.");
const u8 gText_CurrentBattlePoints[] = _("Your current Battle Points.");
const u8 gText_CollectedSymbols[] = _("Your collected Symbols.");
const u8 gText_BattleTowerAbilitySymbol[] = _("Battle Tower - Ability Symbol");
const u8 gText_BattleDomeTacticsSymbol[] = _("Battle Dome - Tactics Symbol");
const u8 gText_BattlePalaceSpiritsSymbol[] = _("Battle Palace - Spirits Symbol");
const u8 gText_BattleArenaGutsSymbol[] = _("Battle Arena - Guts Symbol");
const u8 gText_BattleFactoryKnowledgeSymbol[] = _("Battle Factory - Knowledge Symbol");
const u8 gText_BattlePikeLuckSymbol[] = _("Battle Pike - Luck Symbol");
const u8 gText_BattlePyramidBraveSymbol[] = _("Battle Pyramid - Brave Symbol");
const u8 gText_ThereIsNoBattleRecord[] = _("There is no Battle Record.");
const u8 gText_BattleTower3[] = _("BATTLE TOWER");
const u8 gText_BattleDome2[] = _("BATTLE DOME");
const u8 gText_BattlePalace2[] = _("BATTLE PALACE");
const u8 gText_BattleArena2[] = _("BATTLE ARENA");
const u8 gText_BattleFactory2[] = _("BATTLE FACTORY");
const u8 gText_BattlePike2[] = _("BATTLE PIKE");
const u8 gText_BattlePyramid2[] = _("BATTLE PYRAMID");
const u8 gText_BattleTowerDesc[] = _("KO opponents and aim for the top!\nYour ability will be tested.");
const u8 gText_BattleDomeDesc[] = _("Keep winning at the tournament!\nYour tactics will be tested.");
const u8 gText_BattlePalaceDesc[] = _("Watch your POKéMON battle!\nYour spirit will be tested.");
const u8 gText_BattleArenaDesc[] = _("Win battles with teamed-up POKéMON!\nYour guts will be tested.");
const u8 gText_BattleFactoryDesc[] = _("Aim for victory using rental POKéMON!\nYour knowledge will be tested.");
const u8 gText_BattlePikeDesc[] = _("Select one of three paths to battle!\nYour luck will be tested.");
const u8 gText_BattlePyramidDesc[] = _("Aim for the top with exploration!\nYour bravery will be tested.");
const u8 gText_ContinueMenuPlayer[] = _("PLAYER");
const u8 gText_ContinueMenuTime[] = _("TIME");
const u8 gText_ContinueMenuPokedex[] = _("POKéDEX");
const u8 gText_ContinueMenuBadges[] = _("BADGES");
const u8 gText_Powder[] = _("POWDER");
const u8 gText_BerryPickingRecords[] = _("DODRIO BERRY-PICKING RECORDS");
const u8 gText_BerriesPicked[] = _("BERRIES picked:");
const u8 gText_BestScore[] = _("Best score:");
const u8 gText_BerriesInRowFivePlayers[] = _("BERRIES picked in a row with\nfive players:");
const u8 gText_BerryPickingResults[] = _("Announcing BERRY-PICKING results!");
const u8 gText_10P30P50P50P[] = _("{CLEAR_TO 0x03}10P{CLEAR_TO 0x2B}30P{CLEAR_TO 0x53}50P{CLEAR_TO 0x77}{EMOJI_MINUS}50P");
const u8 gText_AnnouncingRankings[] = _("Announcing rankings!");
const u8 gText_AnnouncingPrizes[] = _("Announcing prizes!");
const u8 gText_1Colon[] = _("1:");
const u8 gText_2Colon[] = _("2:");
const u8 gText_3Colon[] = _("3:");
const u8 gText_4Colon[] = _("4:");
const u8 gText_5Colon[] = _("5:");
const u8 gText_FirstPlacePrize[] = _("The first-place winner gets\nthis {DYNAMIC 0}!");
const u8 gText_CantHoldAnyMore[] = _("You can't hold any more!");
const u8 gText_FilledStorageSpace[] = _("It filled its storage space.");
const u8 gText_WantToPlayAgain[] = _("Want to play again?");
const u8 gText_SomeoneDroppedOut[] = _("Somebody dropped out.\nThe link will be canceled.");
const u8 gText_SpacePoints[] = _(" points");
const u8 gText_CommunicationStandby3[] = _("Communication standby…");
const u8 gText_SpacePoints2[] = _(" points");
const u8 gText_SpaceTimes3[] = _(" time(s)");
const u8 gText_PkmnJumpRecords[] = _("POKéMON JUMP RECORDS");
const u8 gText_JumpsInARow[] = _("Jumps in a row:");
const u8 gText_BestScore2[] = _("Best score:");
const u8 gText_ExcellentsInARow[] = _("EXCELLENTS in a row:");
const u8 gText_AwesomeWonF701F700[] = _("Awesome score! You've\nwon {DYNAMIC 1} {DYNAMIC 0}!");
const u8 gText_FilledStorageSpace2[] = _("It filled its storage space.");
const u8 gText_CantHoldMore[] = _("You can't hold any more!");
const u8 gText_WantToPlayAgain2[] = _("Want to play again?");
const u8 gText_SomeoneDroppedOut2[] = _("Somebody dropped out.\nThe link will be canceled.");
const u8 gText_CommunicationStandby4[] = _("Communication standby…");
const u8 gText_LinkContestResults[] = _("{PLAYER}'s Link Contest Results");
const u8 gText_1st[] = _("1st");
const u8 gText_2nd[] = _("2nd");
const u8 gText_3rd[] = _("3rd");
const u8 gText_4th[] = _("4th");
const u8 gText_Friend[] = _("Friend");

#ifndef EMER_REDUCED
const u8 gText_Pokemon3[] = _("POKeMON"); // Unused
#endif

const u8 gJPText_MysteryGift[] = _("ふしぎなもらいもの");
const u8 gJPText_DecideStop[] = _("{A_BUTTON}けってい {B_BUTTON}やめる");
const u8 gJPText_ReceiveMysteryGiftWithEReader[] = _("カードeリーダー{PLUS}　で\nふしぎなもらいものを　よみこみます");
const u8 gJPText_SelectConnectFromEReaderMenu[] = _("カードeリーダー{PLUS}の　メニューから\n‘つうしん'を　えらび");
const u8 gJPText_SelectConnectWithGBA[] = _("‘ゲームボーイアドバンスとつうしん'\nを　せんたく　してください");

#ifndef EMER_REDUCED
const u8 gJPText_SelectConnectAndPressA[] = _("カードeリーダー{PLUS}の　‘つうしん'を\nえらんで　Aボタンを　おしてください"); // Unused
#endif

const u8 gJPText_LinkIsIncorrect[] = _("せつぞくが　まちがっています");
const u8 gJPText_CardReadingHasBeenHalted[] = _("カードの　よみこみを\nちゅうし　しました");

#ifndef EMER_REDUCED
const u8 gJPText_UnableConnectWithEReader[] = _("カードeリーダー{PLUS}と\nつうしん　できません"); // Unused
#endif

const u8 gJPText_Connecting[] = _("つうしん　ちゅう　です");
const u8 gJPText_ConnectionErrorCheckLink[] = _("つうしん　エラーです\nせつぞくを　たしかめて　ください");
const u8 gJPText_ConnectionErrorTryAgain[] = _("つうしん　エラーです\nはじめから　やりなおして　ください"); // Link error
const u8 gJPText_AllowEReaderToLoadCard[] = _("カードeリーダー{PLUS}　に\nカードを　よみこませて　ください");
const u8 gJPText_ConnectionComplete[] = _("つうしん　しゅうりょう！");
const u8 gJPText_NewTrainerHasComeToHoenn[] = _("あらたな　トレーナーが\nホウエンに　やってきた！");
const u8 gJPText_PleaseWaitAMoment[] = _("しばらく　おまちください");
const u8 gJPText_WriteErrorUnableToSaveData[] = _("かきこみ　エラー　です\nデータが　ほぞん　できませんでした");
const u8 gText_Red[] = _("RED");
const u8 gText_Blue[] = _("BLUE");

#ifndef EMER_REDUCED
const u8 gText_3Dashes[] = _("---"); // Unused
#endif

const u8 gText_SingleBattleRoomResults[] = _("{PLAYER}'s Single Battle Room Results");
const u8 gText_DoubleBattleRoomResults[] = _("{PLAYER}'s Double Battle Room Results");
const u8 gText_MultiBattleRoomResults[] = _("{PLAYER}'s Multi Battle Room Results");
const u8 gText_LinkMultiBattleRoomResults[] = _("{PLAYER}'s Link Multi Battle Room Results");
const u8 gText_SingleBattleTourneyResults[] = _("{PLAYER}'s Single Battle Tourney Results");
const u8 gText_DoubleBattleTourneyResults[] = _("{PLAYER}'s Double Battle Tourney Results");
const u8 gText_SingleBattleHallResults[] = _("{PLAYER}'s Single Battle Hall Results");
const u8 gText_DoubleBattleHallResults[] = _("{PLAYER}'s Double Battle Hall Results");
const u8 gText_BattleChoiceResults[] = _("{PLAYER}'s Battle Choice Results");
const u8 gText_SetKOTourneyResults[] = _("{PLAYER}'s Set KO Tourney Results");
const u8 gText_BattleSwapSingleResults[] = _("{PLAYER}'s Battle Swap Single Results");
const u8 gText_BattleSwapDoubleResults[] = _("{PLAYER}'s Battle Swap Double Results");
const u8 gText_BattleQuestResults[] = _("{PLAYER}'s Battle Quest Results");
const u8 gText_Lv502[] = _("LV. 50");
const u8 gText_OpenLv[] = _("OPEN LV.");
const u8 gText_WinStreak[] = _("Win streak: {STR_VAR_1}");
const u8 gText_Current[] = _("CURRENT");
const u8 gText_Record[] = _("RECORD");
const u8 gText_Prev[] = _("PREV.");
const u8 gText_RentalSwap[] = _("Rental/Swap");
const u8 gText_Total[] = _("Total");
const u8 gText_ClearStreak[] = _("Clear streak: {STR_VAR_1}");
const u8 gText_Championships[] = _("Championships: {STR_VAR_1}");
const u8 gText_RoomsCleared[] = _("Rooms cleared: {STR_VAR_1}");
const u8 gText_TimesCleared[] = _("Times cleared:{CLEAR 0x05}{STR_VAR_1}");
const u8 gText_KOsInARow[] = _("KOs in a row: {STR_VAR_1}");
const u8 gText_TimesVar1[] = _("Times: {STR_VAR_1}");
const u8 gText_FloorsCleared[] = _("Floors cleared: {STR_VAR_1}");

ALIGNED(4) const u8 gText_RecordsLv50[] = _("LV. 50");
ALIGNED(4) const u8 gText_RecordsOpenLevel[] = _("OPEN LEVEL");
ALIGNED(4) const u8 gText_FrontierFacilityWinStreak[] = _("Win streak: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityClearStreak[] = _("Clear streak: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityRoomsCleared[] = _("Rooms cleared: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityKOsStreak[] = _("KOs in a row: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityFloorsCleared[] = _("Floors cleared: {STR_VAR_2}");
ALIGNED(4) const u8 gText_123Dot[][3] = {_("1."), _("2."), _("3.")};

const u8 gText_SavingDontTurnOff2[] = _("SAVING…\nDON'T TURN OFF THE POWER.");
const u8 gText_BlenderMaxSpeedRecord[] = _("BERRY BLENDER\nMAXIMUM SPEED RECORD!");
const u8 gText_234Players[] = _("2 PLAYERS\n3 PLAYERS\n4 PLAYERS");
const u8 gText_YesNo[] = _("YES\nNO");
const u8 gText_SelectorArrow3[] = _("▶");
const u8 gText_Peekaboo[] = _("PEEKABOO!");
const u8 gText_CommErrorCheckConnections[] = _("Communication error…\nPlease check all connections,\nthen turn the power OFF and ON.");
const u8 gText_CommErrorEllipsis[] = _("Communication error…");
const u8 gText_MoveCloserToLinkPartner[] = _("Move closer to your link partner(s).\nAvoid obstacles between partners.");
const u8 gText_ABtnRegistrationCounter[] = _("A Button: Registration Counter");
const u8 gText_ABtnTitleScreen[] = _("A Button: Title Screen");
const u8 gText_Option[] = _("OPTION");
const u8 gText_TextSpeed[] = _("TEXT SPEED");
const u8 gText_BattleScene[] = _("BATTLE SCENE");
const u8 gText_BattleStyle[] = _("BATTLE STYLE");
const u8 gText_Sound[] = _("SOUND");
const u8 gText_Frame[] = _("FRAME");

#ifdef EMER_QOL
const u8 gText_OptionMenuCancel[] = _("DONE");
#else
const u8 gText_OptionMenuCancel[] = _("CANCEL");
#endif

const u8 gText_ButtonMode[] = _("BUTTON MODE");
const u8 gText_TextSpeedSlow[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SLOW");
const u8 gText_TextSpeedMid[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MID");
const u8 gText_TextSpeedFast[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}FAST");
const u8 gText_BattleSceneOn[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ON");
const u8 gText_BattleSceneOff[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
const u8 gText_BattleStyleShift[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SHIFT");
const u8 gText_BattleStyleSet[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SET");
const u8 gText_SoundMono[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MONO");
const u8 gText_SoundStereo[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}STEREO");
const u8 gText_FrameType[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}TYPE");
const u8 gText_FrameTypeNumber[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}");
const u8 gText_ButtonTypeNormal[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}NORMAL");
const u8 gText_ButtonTypeLR[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}LR");
const u8 gText_ButtonTypeLEqualsA[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}L=A");
const u8 gText_NumPlayerLink[] = _("{STR_VAR_1}P LINK");
const u8 gText_BronzeCard[] = _("BRONZE");
const u8 gText_CopperCard[] = _("COPPER");
const u8 gText_SilverCard[] = _("SILVER");
const u8 gText_GoldCard[] = _("GOLD");
const u8 gText_Day[] = _("DAY");
const u8 gText_Colon3[] = _(":");
const u8 gText_Confirm2[] = _("CONFIRM");

#ifndef EMER_REDUCED
const u8 gText_Days[] = _("Days"); // Unused
const u8 gText_TimeColon2[] = _("Time:"); // Unused
const u8 gText_GameTime[] = _("Game time"); // Unused
const u8 gText_RTCTime[] = _("RTC time"); // Unused
const u8 gText_UpdatedTime[] = _("Updated time"); // Unused
#endif

const u8 gText_MenuPokedex[] = _("POKéDEX");
const u8 gText_MenuPokemon[] = _("POKéMON");
const u8 gText_MenuBag[] = _("BAG");
const u8 gText_MenuPokenav[] = _("POKéNAV");
const u8 gText_MenuPlayer[] = _("{PLAYER}");
const u8 gText_MenuSave[] = _("SAVE");
const u8 gText_MenuOption[] = _("OPTION");
const u8 gText_MenuExit[] = _("EXIT");
const u8 gText_MenuRetire[] = _("RETIRE");
const u8 gText_MenuRest[] = _("REST");
const u8 gText_SafariBallStock[] = _("SAFARI BALLS\nStock: {STR_VAR_1}");
const u8 gText_BattlePyramidFloor[] = _("Battle Pyramid\n{STR_VAR_1}");
const u8 gText_Floor1[] = _("Floor 1");
const u8 gText_Floor2[] = _("Floor 2");
const u8 gText_Floor3[] = _("Floor 3");
const u8 gText_Floor4[] = _("Floor 4");
const u8 gText_Floor5[] = _("Floor 5");
const u8 gText_Floor6[] = _("Floor 6");
const u8 gText_Floor7[] = _("Floor 7");
const u8 gText_Peak[] = _("Peak");
const u8 gText_LinkStandby2[] = _("Link standby…\n… … B Button: Cancel");
const u8 gText_PressAToLoadEvent[] = _("Press the A Button to load event.\n… … B Button: Cancel");
const u8 gText_LoadingEvent[] = _("Loading event…");
const u8 gText_DontRemoveCableTurnOff[] = _("Don't remove the Game Link cable.\nDon't turn off the power.");
const u8 gText_EventSafelyLoaded[] = _("The event was safely loaded.");
const u8 gText_LoadErrorEndingSession[] = _("Loading error.\nEnding session.");

#ifndef EMER_REDUCED
const u8 gJPText_Player[] = _("プレイヤー"); // Unused
const u8 gJPText_Sama[] = _("さま"); // Unused
#endif

const u8 gText_DexHoenn[] = _("HOENN");
const u8 gText_DexNational[] = _("NATIONAL");
const u8 gText_PokedexDiploma[] = _("PLAYER: {CLEAR 0x10}{COLOR RED}{SHADOW LIGHT_RED}{PLAYER}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n\nThis document certifies\nthat you have successfully\ncompleted your\n{STR_VAR_1} POKéDEX.\n\n{CLEAR_TO 0x42}{COLOR RED}{SHADOW LIGHT_RED}GAME FREAK");

#ifndef EMER_REDUCED
const u8 gJPText_GameFreak[] = _("{COLOR RED}{SHADOW LIGHT_RED}ゲ-ムフリ-ク"); // Unused
const u8 gText_DiplomaEmpty[] = _("{COLOR RED}{SHADOW LIGHT_RED}"); // Unused
#endif

const u8 gText_Hoenn[] = _("HOENN");
const u8 gText_OhABite[] = _("Oh! A bite!");
const u8 gText_PokemonOnHook[] = _("A POKéMON's on the hook!{PAUSE_UNTIL_PRESS}");
const u8 gText_NotEvenANibble[] = _("Not even a nibble…{PAUSE_UNTIL_PRESS}");
const u8 gText_ItGotAway[] = _("It got away…{PAUSE_UNTIL_PRESS}");
#ifdef CHAIN_FISHING
const u8 gText_StreakCount[] = _("Landed a POKéMON!\nStreak: {STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gText_Max[] = _("MAX");
#endif
const u8 gText_XWillBeSentToY[] = _("{STR_VAR_2} will be\nsent to {STR_VAR_1}.");
const u8 gText_ByeByeVar1[] = _("Bye-bye, {STR_VAR_2}!");
const u8 gText_XSentOverY[] = _("{STR_VAR_1} sent over {STR_VAR_3}.");
const u8 gText_TakeGoodCareOfX[] = _("Take good care of {STR_VAR_3}!");

// Easy chat group names
const u8 gEasyChatGroupName_Pokemon[] = _("POKéMON");
const u8 gEasyChatGroupName_Trainer[] = _("TRAINER");
const u8 gEasyChatGroupName_Status[] = _("STATUS");
const u8 gEasyChatGroupName_Battle[] = _("BATTLE");
const u8 gEasyChatGroupName_Greetings[] = _("GREETINGS");
const u8 gEasyChatGroupName_People[] = _("PEOPLE");
const u8 gEasyChatGroupName_Voices[] = _("VOICES");
const u8 gEasyChatGroupName_Speech[] = _("SPEECH");
const u8 gEasyChatGroupName_Endings[] = _("ENDINGS");
const u8 gEasyChatGroupName_Feelings[] = _("FEELINGS");
const u8 gEasyChatGroupName_Conditions[] = _("CONDITIONS");
const u8 gEasyChatGroupName_Actions[] = _("ACTIONS");
const u8 gEasyChatGroupName_Lifestyle[] = _("LIFESTYLE");
const u8 gEasyChatGroupName_Hobbies[] = _("HOBBIES");
const u8 gEasyChatGroupName_Time[] = _("TIME");
const u8 gEasyChatGroupName_Misc[] = _("MISC.");
const u8 gEasyChatGroupName_Adjectives[] = _("ADJECTIVES");
const u8 gEasyChatGroupName_Events[] = _("EVENTS");
const u8 gEasyChatGroupName_Move1[] = _("MOVE 1");
const u8 gEasyChatGroupName_Move2[] = _("MOVE 2");
const u8 gEasyChatGroupName_TrendySaying[] = _("TRENDY SAYING");
const u8 gEasyChatGroupName_Pokemon2[] = _("POKéMON2");

const u8 gText_ThreeQuestionMarks[] = _("???");
const u8 gText_MaxHP[] = _("MAX. HP");
const u8 gText_Attack[] = _("ATTACK");
const u8 gText_Defense[] = _("DEFENSE");
const u8 gText_Speed[] = _("SPEED");
const u8 gText_SpAtk[] = _("SP. ATK");
const u8 gText_SpDef[] = _("SP. DEF");
const u8 gText_Plus[] = _("{PLUS}");
const u8 gText_Dash[] = _("-");
const u8 gText_FromSpace[] = _("From ");
const u8 gText_MixingRecords[] = _("Mixing records…");
const u8 gText_RecordMixingComplete[] = _("Record mixing completed.\nThank you for waiting.");
const u8 gText_YourName[] = _("YOUR NAME?");
const u8 gText_BoxName[] = _("BOX NAME?");
const u8 gText_PkmnsNickname[] = _("{STR_VAR_1}'s nickname?");
const u8 gText_TellHimTheWords[] = _("Tell him the words.");
const u8 gText_MoveOkBack[] = _("{DPAD_NONE}MOVE  {A_BUTTON}OK  {B_BUTTON}BACK");
const u8 gText_CallCantBeMadeHere[] = _("A call can't be made from here.");
const u8 gText_ContestLady_Handsome[] = _("HANDSOME");
const u8 gText_ContestLady_Vinny[] = _("VINNY");
const u8 gText_ContestLady_Moreme[] = _("MOREME");
const u8 gText_ContestLady_Ironhard[] = _("IRONHARD");
const u8 gText_ContestLady_Muscle[] = _("MUSCLE");
const u8 gText_ContestLady_Coolness[] = _("coolness");
const u8 gText_ContestLady_Beauty[] = _("beauty");
const u8 gText_ContestLady_Cuteness[] = _("cuteness");
const u8 gText_ContestLady_Smartness[] = _("smartness");
const u8 gText_ContestLady_Toughness[] = _("toughness");
const u8 gText_QuizLady_Lady[] = _("Lady");
const u8 gText_FavorLady_Slippery[] = _("slippery");
const u8 gText_FavorLady_Roundish[] = _("roundish");
const u8 gText_FavorLady_Whamish[] = _("wham-ish");
const u8 gText_FavorLady_Shiny[] = _("shiny");
const u8 gText_FavorLady_Sticky[] = _("sticky");
const u8 gText_FavorLady_Pointy[] = _("pointy");
const u8 gText_RentalPkmn2[] = _("RENTAL POKéMON");
const u8 gText_SelectFirstPkmn[] = _("Select the first POKéMON.");
const u8 gText_SelectSecondPkmn[] = _("Select the second POKéMON.");
const u8 gText_SelectThirdPkmn[] = _("Select the third POKéMON.");
const u8 gText_Rent[] = _("RENT");
const u8 gText_Summary[] = _("SUMMARY");
const u8 gText_Others2[] = _("OTHERS");
const u8 gText_Deselect[] = _("DESELECT");
const u8 gText_TheseThreePkmnOkay[] = _("Are these three POKéMON OK?");
const u8 gText_Yes2[] = _("YES");
const u8 gText_No2[] = _("NO");
const u8 gText_CantSelectSamePkmn[] = _("Can't select same {PKMN}.");
const u8 gText_PkmnSwap[] = _("POKéMON SWAP");
const u8 gText_SelectPkmnToSwap[] = _("Select POKéMON to swap.");
const u8 gText_SelectPkmnToAccept[] = _("Select POKéMON to accept.");
const u8 gText_Swap[] = _("SWAP");
const u8 gText_Summary2[] = _("SUMMARY");
const u8 gText_Rechoose[] = _("RECHOOSE");
const u8 gText_QuitSwapping[] = _("Quit swapping?");
const u8 gText_Yes3[] = _("YES");
const u8 gText_No3[] = _("NO");
const u8 gText_PkmnForSwap[] = _("{PKMN} FOR SWAP");
const u8 gText_Cancel3[] = _("CANCEL");

#ifndef EMER_REDUCED
const u8 gText_Swap2[] = _("SWAP"); // Unused
const u8 gText_Accept[] = _("ACCEPT"); // Unused
#endif

const u8 gText_AcceptThisPkmn[] = _("Accept this POKéMON?");

#ifndef EMER_REDUCED
const u8 gText_4Spaces[] = _("    "); // Unused
#endif

const u8 gText_SamePkmnInPartyAlready[] = _("Same {PKMN} in party already.");
const u8 gText_DecimalPoint[] = _(".");
const u8 gText_SavingPlayer[] = _("PLAYER");
const u8 gText_SavingBadges[] = _("BADGES");
const u8 gText_SavingPokedex[] = _("POKéDEX");
const u8 gText_SavingTime[] = _("TIME");
const u8 gText_WirelessCommStatus[] = _("Wireless Communication Status");
const u8 gText_PeopleTrading[] = _("People trading:");
const u8 gText_PeopleBattling[] = _("People battling:");
const u8 gText_PeopleInUnionRoom[] = _("People in the UNION ROOM:");
const u8 gText_PeopleCommunicating[] = _("People communicating:");
const u8 gText_F700Players[] = _("{DYNAMIC 0} players");
const u8 gText_F701Players[] = _("{DYNAMIC 1} players");
const u8 gText_F702Players[] = _("{DYNAMIC 2} players");
const u8 gText_F703Players[] = _("{DYNAMIC 3} players");

const u8 *const gTextTable_Players[] = {
    gText_F700Players,
    gText_F701Players,
    gText_F702Players,
    gText_F703Players
};

ALIGNED(4) const u8 gText_WonderCards[] = _("WONDER CARDS");
ALIGNED(4) const u8 gText_WonderNews[] = _("WONDER NEWS");
ALIGNED(4) const u8 gText_WirelessCommunication[] = _("WIRELESS COMMUNICATION");
ALIGNED(4) const u8 gText_Friend2[] = _("FRIEND");
ALIGNED(4) const u8 gText_Exit3[] = _("EXIT");
ALIGNED(4) const u8 gText_Receive[] = _("RECEIVE");
ALIGNED(4) const u8 gText_Send[] = _("SEND");
ALIGNED(4) const u8 gText_Toss[] = _("TOSS");
ALIGNED(4) const u8 gText_VarietyOfEventsImportedWireless[] = _("A variety of events will be imported\nover Wireless Communication.");
ALIGNED(4) const u8 gText_WonderCardsInPossession[] = _("Read the WONDER CARDS in your\npossession.");
ALIGNED(4) const u8 gText_ReadNewsThatArrived[] = _("Read the NEWS that arrived.");
ALIGNED(4) const u8 gText_ReturnToTitle[] = _("Return to the title screen.");
ALIGNED(4) const u8 gText_DontHaveCardNewOneInput[] = _("You don't have a WONDER CARD,\nso a new CARD will be input.");
ALIGNED(4) const u8 gText_DontHaveNewsNewOneInput[] = _("You don't have any WONDER NEWS,\nso new NEWS will be input.");
ALIGNED(4) const u8 gText_WhereShouldCardBeAccessed[] = _("Where should the WONDER CARD\nbe accessed?");
ALIGNED(4) const u8 gText_WhereShouldNewsBeAccessed[] = _("Where should the WONDER NEWS\nbe accessed?");

#ifndef EMER_REDUCED
ALIGNED(4) const u8 gText_CommunicationStandbyBButtonCancel[] = _("Communication standby…\nB Button: Cancel"); // Unused
#endif

ALIGNED(4) const u8 gText_Communicating[] = _("Communicating…");
ALIGNED(4) const u8 gText_CommunicationCompleted[] = _("Communication completed.");
ALIGNED(4) const u8 gText_CommunicationError[] = _("Communication error.");
ALIGNED(4) const u8 gText_CommunicationCanceled[] = _("Communication has been canceled.");
ALIGNED(4) const u8 gText_ThrowAwayWonderCard[] = _("Throw away the WONDER CARD\nand input a new CARD?");
ALIGNED(4) const u8 gText_HaventReceivedCardsGift[] = _("You haven't received the CARD's gift\nyet. Input a new CARD anyway?");
ALIGNED(4) const u8 gText_WonderCardReceivedFrom[] = _("A WONDER CARD has been received\nfrom {STR_VAR_1}.");
ALIGNED(4) const u8 gText_WonderNewsReceivedFrom[] = _("A WONDER NEWS item has been\nreceived from {STR_VAR_1}.");
ALIGNED(4) const u8 gText_WonderCardReceived[] = _("A new WONDER CARD has been\nreceived.");
ALIGNED(4) const u8 gText_WonderNewsReceived[] = _("A new WONDER NEWS item has been\nreceived.");
ALIGNED(4) const u8 gText_NewStampReceived[] = _("A new STAMP has been received.");
ALIGNED(4) const u8 gText_NewTrainerReceived[] = _("A new TRAINER has arrived.");
ALIGNED(4) const u8 gText_AlreadyHadCard[] = _("You already had that\nWONDER CARD.");
ALIGNED(4) const u8 gText_AlreadyHadNews[] = _("You already had that\nWONDER NEWS item.");
ALIGNED(4) const u8 gText_AlreadyHadStamp[] = _("You already had that\nSTAMP.");
ALIGNED(4) const u8 gText_NoMoreRoomForStamps[] = _("There's no more room for adding\nSTAMPS.");
ALIGNED(4) const u8 gText_RecordUploadedViaWireless[] = _("Your record has been uploaded via\nWIRELESS COMMUNICATION.");
ALIGNED(4) const u8 gText_CantAcceptCardFromTrainer[] = _("You can't accept a WONDER CARD\nfrom this TRAINER.");
ALIGNED(4) const u8 gText_CantAcceptNewsFromTrainer[] = _("You can't accept WONDER NEWS\nfrom this TRAINER.");
ALIGNED(4) const u8 gText_NothingSentOver[] = _("Nothing was sent over…");
ALIGNED(4) const u8 gText_WhatToDoWithCards[] = _("What would you like to do\nwith the WONDER CARDS?");
ALIGNED(4) const u8 gText_WhatToDoWithNews[] = _("What would you like to do\nwith the WONDER NEWS?");
ALIGNED(4) const u8 gText_SendingWonderCard[] = _("Sending your WONDER CARD…");
ALIGNED(4) const u8 gText_SendingWonderNews[] = _("Sending your WONDER NEWS item…");
ALIGNED(4) const u8 gText_WonderCardSentTo[] = _("Your WONDER CARD has been sent\nto {STR_VAR_1}.");
ALIGNED(4) const u8 gText_WonderNewsSentTo[] = _("Your WONDER NEWS item has been\nsent to {STR_VAR_1}.");
ALIGNED(4) const u8 gText_StampSentTo[] = _("A STAMP has been sent to {STR_VAR_1}.");
ALIGNED(4) const u8 gText_GiftSentTo[] = _("A GIFT has been sent to {STR_VAR_1}.");
ALIGNED(4) const u8 gText_OtherTrainerHasCard[] = _("The other TRAINER has the same\nWONDER CARD already.");
ALIGNED(4) const u8 gText_OtherTrainerHasNews[] = _("The other TRAINER has the same\nWONDER NEWS already.");
ALIGNED(4) const u8 gText_OtherTrainerHasStamp[] = _("The other TRAINER has the same\nSTAMP already.");
ALIGNED(4) const u8 gText_OtherTrainerCanceled[] = _("The other TRAINER canceled\ncommunication.");
ALIGNED(4) const u8 gText_CantSendGiftToTrainer[] = _("You can't send a MYSTERY GIFT to\nthis TRAINER.");
ALIGNED(4) const u8 gText_IfThrowAwayCardEventWontHappen[] = _("If you throw away the CARD,\nits event won't happen. Okay?");
ALIGNED(4) const u8 gText_OkayToDiscardNews[] = _("Is it okay to discard this\nNEWS item?");
ALIGNED(4) const u8 gText_HaventReceivedGiftOkayToDiscard[] = _("You haven't received the\nGIFT. Is it okay to discard?");
ALIGNED(4) const u8 gText_DataWillBeSaved[] = _("Data will be saved.\nPlease wait.");
ALIGNED(4) const u8 gText_SaveCompletedPressA[] = _("Save completed.\nPlease press the A Button.");
ALIGNED(4) const u8 gText_WonderCardThrownAway[] = _("The WONDER CARD was thrown away.");
ALIGNED(4) const u8 gText_WonderNewsThrownAway[] = _("The WONDER NEWS was thrown away.");
ALIGNED(4) const u8 gText_MysteryGift[] = _("MYSTERY GIFT");
ALIGNED(4) const u8 gText_PickOKExit[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}EXIT");
ALIGNED(4) const u8 gText_PickOKCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}CANCEL");
const u8 gText_PlayersBattleResults[] = _("{PLAYER}'s BATTLE RESULTS");
const u8 gText_TotalRecordWLD[] = _("TOTAL RECORD W:{STR_VAR_1} L:{STR_VAR_2} D:{STR_VAR_3}");
const u8 gText_WinLoseDraw[] = _("{CLEAR_TO 0x53}WIN{CLEAR_TO 0x80}LOSE{CLEAR_TO 0xB0}DRAW");
const u8 gText_CommunicationStandby5[] = _("Communication standby…");
const u8 gText_QuitTheGame[] = _("Quit the game?");
const u8 gText_YouveGot9999Coins[] = _("You've got 9,999 COINS.");
const u8 gText_YouveRunOutOfCoins[] = _("You've run out of COINS.\nGame over!");
const u8 gText_YouDontHaveThreeCoins[] = _("You don't have three COINS.");
const u8 gText_ReelTimeHelp[] = _("REEL TIME\nHere's your chance to take\naim and nail marks!\nReel Time continues for the\nawarded number of spins.\nIt all ends on a Big Bonus.");
const u8 gDaycareText_GetAlongVeryWell[] = _("The two seem to get along\nvery well.");
const u8 gDaycareText_GetAlong[] = _("The two seem to get along.");
const u8 gDaycareText_DontLikeOther[] = _("The two don't seem to like\neach other much.");
const u8 gDaycareText_PlayOther[] = _("The two prefer to play with other\nPOKéMON than each other.");
const u8 gText_NewLine2[] = _("\n");
const u8 gText_Exit4[] = _("EXIT");
const u8 gText_Lv[] = _("{LV}");
const u8 gText_TimeBoard[] = _("TIME BOARD");
const u8 gText_TimeCleared[] = _("TIME CLEARED ");
const u8 gText_XMinYDotZSec[] = _("{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.");
const u8 gText_TrainerHill1F[] = _("1F");
const u8 gText_TrainerHill2F[] = _("2F");
const u8 gText_TrainerHill3F[] = _("3F");
const u8 gText_TrainerHill4F[] = _("4F");
const u8 gText_TeachWhichMoveToPkmn[] = _("Teach which move to {STR_VAR_1}?");
const u8 gText_MoveRelearnerTeachMoveConfirm[] = _("Teach {STR_VAR_2}?");
const u8 gText_MoveRelearnerPkmnLearnedMove[] = _("{STR_VAR_1} learned\n{STR_VAR_2}!");
const u8 gText_MoveRelearnerPkmnTryingToLearnMove[] = _("{STR_VAR_1} is trying to learn\n{STR_VAR_2}.\pBut {STR_VAR_1} can't learn more\nthan four moves.\pDelete an older move to make\nroom for {STR_VAR_2}?");
const u8 gText_MoveRelearnerStopTryingToTeachMove[] = _("Stop trying to teach\n{STR_VAR_2}?");
const u8 gText_MoveRelearnerAndPoof[] = _("{PAUSE 32}1, {PAUSE 15}2, and {PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}Poof!\p");
const u8 gText_MoveRelearnerPkmnForgotMoveAndLearnedNew[] = _("{STR_VAR_1} forgot {STR_VAR_3}.\pAnd…\p{STR_VAR_1} learned {STR_VAR_2}.");

#ifndef EMER_REDUCED
const u8 gText_MoveRelearnedPkmnDidNotLearnMove[] = _("{STR_VAR_1} did not learn the\nmove {STR_VAR_2}."); // Unused
#endif

const u8 gText_MoveRelearnerGiveUp[] = _("Give up trying to teach a new\nmove to {STR_VAR_1}?");
const u8 gText_MoveRelearnerWhichMoveToForget[] = _("Which move should be\nforgotten?\p");
const u8 gText_MoveRelearnerBattleMoves[] = _("BATTLE MOVES");
const u8 gText_MoveRelearnerContestMovesTitle[] = _("CONTEST MOVES");

#ifndef EMER_REDUCED
const u8 gText_MoveRelearnerType[] = _("TYPE/"); // Unused
#endif

const u8 gText_MoveRelearnerPP[] = _("PP/");
const u8 gText_MoveRelearnerPower[] = _("POWER/");
const u8 gText_MoveRelearnerAccuracy[] = _("ACCURACY/");
const u8 gText_MoveRelearnerAppeal[] = _("APPEAL");
const u8 gText_MoveRelearnerJam[] = _("JAM");
const u8 gText_Kira[] = _("KIRA");
const u8 gText_Amy[] = _("AMY");
const u8 gText_John[] = _("JOHN");
const u8 gText_Roy[] = _("ROY");
const u8 gText_Gabby[] = _("GABBY");
const u8 gText_Anna[] = _("ANNA");
const u8 gText_ClearAllSaveData[] = _("Clear all save data areas?");
const u8 gText_ClearingData[] = _("Clearing data…\nPlease wait.");
const u8 gText_IsThisTheCorrectTime[] = _("Is this the correct time?");
const u8 gText_Confirm3[] = _("CONFIRM");
const u8 gText_Cancel4[] = _("CANCEL");
const u8 gText_MrStoneMatchCallDesc[] = _("DEVON PRES");
const u8 gText_MrStoneMatchCallName[] = _("MR. STONE");
const u8 gText_StevenMatchCallDesc[] = _("HARD AS ROCK");
const u8 gText_StevenMatchCallName[] = _("STEVEN");
const u8 gText_MayBrendanMatchCallDesc[] = _("RAD NEIGHBOR");
const u8 gText_NormanMatchCallDesc[] = _("RELIABLE ONE");
const u8 gText_MomMatchCallDesc[] = _("CALM & KIND");
const u8 gText_WallyMatchCallDesc[] = _("{PKMN} LOVER");
const u8 gText_NormanMatchCallName[] = _("DAD");
const u8 gText_MomMatchCallName[] = _("MOM");
const u8 gText_ScottMatchCallDesc[] = _("ELUSIVE EYES");
const u8 gText_ScottMatchCallName[] = _("SCOTT");
const u8 gText_RoxanneMatchCallDesc[] = _("ROCKIN' WHIZ");
const u8 gText_BrawlyMatchCallDesc[] = _("THE BIG HIT");
const u8 gText_WattsonMatchCallDesc[] = _("SWELL SHOCK");
const u8 gText_FlanneryMatchCallDesc[] = _("PASSION BURN");
const u8 gText_WinonaMatchCallDesc[] = _("SKY TAMER");
const u8 gText_TateLizaMatchCallDesc[] = _("MYSTIC DUO");
const u8 gText_JuanMatchCallDesc[] = _("DANDY CHARM");
const u8 gText_EliteFourMatchCallDesc[] = _("ELITE FOUR");
const u8 gText_ChampionMatchCallDesc[] = _("CHAMPION");
const u8 gText_ProfBirchMatchCallDesc[] = _("{PKMN} PROF.");
const u8 gText_CommStandbyAwaitingOtherPlayer[] = _("Communication standby…\nAwaiting another player to choose.");
const u8 gText_BattleWasRefused[] = _("The battle was refused.{PAUSE 60}");
const u8 gText_RefusedBattle[] = _("Refused the battle.{PAUSE 60}");
const u8 gText_NoWeather[] = _("NO WEATHER"); // Below are unused debug names for weather types

#ifndef EMER_REDUCED
const u8 gText_Sunny[] = _("SUNNY"); // Unused
const u8 gText_Sunny2[] = _("SUNNY2"); // Unused
const u8 gText_Rain[] = _("RAIN"); // Unused
const u8 gText_Snow[] = _("SNOW"); // Unused
const u8 gText_Lightning[] = _("LIGHTNING"); // Unused
const u8 gText_Fog[] = _("FOG"); // Unused
const u8 gText_VolcanoAsh[] = _("VOLCANO ASH"); // Unused
const u8 gText_Sandstorm[] = _("SANDSTORM"); // Unused
const u8 gText_Fog2[] = _("FOG2"); // Unused
const u8 gText_Seafloor[] = _("SEAFLOOR"); // Unused
const u8 gText_Cloudy[] = _("CLOUDY"); // Unused
const u8 gText_Sunny3[] = _("SUNNY3"); // Unused
const u8 gText_HeavyRain[] = _("HEAVY RAIN"); // Unused
const u8 gText_Seafloor2[] = _("SEAFLOOR2"); // Unused
#endif

const u8 gText_DelAll[] = _("DEL. ALL");
const u8 gText_Cancel5[] = _("CANCEL");
const u8 gText_Ok2[] = _("OK");
const u8 gText_Quiz[] = _("QUIZ");
const u8 gText_Answer[] = _("ANSWER");
const u8 gText_PokeBalls[] = _("POKé BALLS");
const u8 gText_Berry[] = _("BERRY");
const u8 gText_Berries[] = _("BERRIES");
