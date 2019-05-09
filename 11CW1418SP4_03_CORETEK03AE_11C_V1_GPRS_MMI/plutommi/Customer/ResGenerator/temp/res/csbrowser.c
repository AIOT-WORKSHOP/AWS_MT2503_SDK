/* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"
#include "custresdef.h"

#ifdef __MMI_CSB_BROWSER__

/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

/* APP tag, include your app name defined in MMIDataType.h */
<APP id="APP_CSB">

    /* When you use any ID of other module, you need to add
       that header file here, so that Resgen can find the ID */
    <!--Include Area-->
    <INCLUDE file="GlobalResDef.h,SettingResDef.h"/>

    <!-----------------------------------------------------String Resource Area----------------------------------------------------->
    /* String ID of you Application, we will get string from ref_list.txt for all languages */

    /* CS Main Menu */
    <STRING id="STR_ID_CSB_TEXT">Category Screen Browser</STRING>
    <STRING id="STR_ID_CSB_VIEW_TEXT">View</STRING>
    <STRING id="STR_ID_CSB_SEARCH_TEXT">Search</STRING>
    <STRING id="STR_ID_CSB_TESTTOOL_TEXT">TestTool</STRING>

    /* View Main Menu */
    <STRING id="STR_ID_CSB_START_VIEW_TEXT">Start View</STRING>
    <STRING id="STR_ID_CSB_START_VIEW_X_TEXT">Start View X</STRING>
    <STRING id="STR_ID_CSB_VIEW_OPTIONS_TEXT">Options</STRING>

    /* Search Main Menu */
    <STRING id="STR_ID_CSB_SEARCH_CONTROL_TEXT">By Control</STRING>
    <STRING id="STR_ID_CSB_SEARCH_APP_TEXT">By Application</STRING>
    <STRING id="STR_ID_CSB_SEARCH_SCREENID_TEXT">By Screen ID</STRING>

    /* Option Menu */
    <STRING id="STR_ID_CSB_OPTIONS_VIEW_MODE_TEXT">View Mode</STRING>
    <STRING id="STR_ID_CSB_OPTIONS_MODE_SETTINGS_TEXT">Mode Settings</STRING>

    /* View Mode Menu */
    <STRING id="STR_ID_CSB_VIEW_MODE_AUTO_TEXT">Auto</STRING>
    <STRING id="STR_ID_CSB_VIEW_MODE_MANUAL_TEXT">Manual</STRING>
    
    /* Mode Setting Menu */
    <STRING id="STR_ID_CSB_AUTO_MODE_TIME_TEXT">Auto Mode Time</STRING>
    <STRING id="STR_ID_CSB_MANUAL_MODE_TEXT">Manual Mode</STRING>

    /* Manual Mode Menu */
    <STRING id="STR_ID_CSB_MANUAL_MODE_INTERACTIVE_TEXT">Interactive</STRING>
    <STRING id="STR_ID_CSB_MANUAL_MODE_NONINTERACTIVE_TEXT">Non-Interactive</STRING>

    /* Test Tool */
    <STRING id="STR_ID_CSB_RUN_TESTTOOL_TEXT">Run Test Tool</STRING>
    <STRING id="STR_ID_CSB_SET_LOCATION_TEXT">Set Location</STRING>
    <STRING id="STR_ID_CSB_VIEW_IMAGES">View Images</STRING>


    /* Strings for Control Names */
    <STRING id="STR_ID_CSB_CALL_SCR_TEXT">Call Screen</STRING>
    <STRING id="STR_ID_CSB_COLOR_PICKER_TEXT">Color Picker Screen</STRING>
    <STRING id="STR_ID_CSB_EDITOR_TEXT">Editor</STRING>
    <STRING id="STR_ID_CSB_EDITOR_LIST_MENU_TEXT">Editor List Menu</STRING>
    <STRING id="STR_ID_CSB_EDITOR_POPUP_TEXT">Editor Popup</STRING>
    <STRING id="STR_ID_CSB_IDLE_TEXT">Idle Screen</STRING>
    <STRING id="STR_ID_CSB_IMAGE_VIEWER_TEXT">Image Viewer</STRING>
    <STRING id="STR_ID_CSB_LIST_MENU_TEXT">List Menu</STRING>
    <STRING id="STR_ID_CSB_MATRIX_MENU_TEXT">Matrix Menu</STRING>
    <STRING id="STR_ID_CSB_POPUP_TEXT">Pop-Up</STRING>
    <STRING id="STR_ID_CSB_PROGRESS_BAR_TEXT">Progress Bar</STRING>
    <STRING id="STR_ID_CSB_SLIDER_TEXT">Slider Screen</STRING>
    <STRING id="STR_ID_CSB_RADIO_BUTTON_TEXT">Radio Button</STRING>
    <STRING id="STR_ID_CSB_CHECK_BOX_TEXT">Check Box</STRING>
    <STRING id="STR_ID_CSB_SUB_LCD_TEXT">Sub LCD</STRING>
    <STRING id="STR_ID_CSB_PANEL_TEXT">Panel</STRING>

    /* String for Appplication names */
    <STRING id="STR_ID_CSB_CALLS_TEXT">Calls</STRING>
    <STRING id="STR_ID_CSB_EDITOR_TEXT">Editor</STRING>
    <STRING id="STR_ID_CSB_ENGG_MODE_TEXT">Engineering Mode</STRING>
    <STRING id="STR_ID_CSB_EXTRA_TEXT">Extra</STRING>
    <STRING id="STR_ID_CSB_FUN_AND_GAMES_TEXT">Fun and Games</STRING>
    <STRING id="STR_ID_CSB_FILE_MANAGER_TEXT">File Manager</STRING>
    <STRING id="STR_ID_CSB_MESSAGES_TEXT">Messages</STRING>
    <STRING id="STR_ID_CSB_MISC_TEXT">Misc</STRING>
    <STRING id="STR_ID_CSB_MULTIMEDIA_TEXT">Multimedia</STRING>
    <STRING id="STR_ID_CSB_ORGANIZER_TEXT">Organizer</STRING>
    <STRING id="STR_ID_CSB_PHONEBOOK_TEXT">Phonebook</STRING>
    <STRING id="STR_ID_CSB_PROFILE_TEXT">Profile</STRING>
    <STRING id="STR_ID_CSB_SERVICES_TEXT">Services</STRING>
    <STRING id="STR_ID_CSB_SHORTCUT_TEXT">Shortcut</STRING>
    <STRING id="STR_ID_CSB_SETTINGS_TEXT">Settings</STRING>
    <STRING id="STR_ID_CSB_WAP_TEXT">Wap</STRING>
    <STRING id="STR_ID_CSB_UNUSED_TEXT">Unused</STRING>
    <STRING id="STR_ID_CSB_HID_TEXT">HID</STRING>

    /* Error String */
    <STRING id="STR_ID_CSB_SCR_NOT_EXIST_TEXT">Screen does not exist!</STRING>
    <STRING id="STR_ID_CSB_TESTTOOL_PASS">TestTool executed successfully!</STRING>
    <STRING id="STR_ID_CSB_TESTTOOL_FAIL">TestTool execution error!</STRING>
    <STRING id="STR_ID_CSB_FILE_PATH_TOO_LONG">File path too long!</STRING>
    <STRING id="STR_ID_CSB_NO_SCR_FOUND_TEXT">No Screen Found!</STRING>
    <STRING id="STR_ID_CSB_JPEG_FAIL_TEXT">JPEG Encoder Error!</STRING>
    <STRING id="STR_ID_CSB_MEMORY_FAIL_TEXT">Memory Not Available!</STRING>
    <STRING id="STR_ID_CSB_NO_MEMORY_CARD">Memory Card Not Found!</STRING>

    /* Misc */
    <STRING id="STR_ID_CSB_SET_TEXT">Set</STRING>
    <STRING id="STR_ID_CSB_SHOW_CATEGORY_TEXT">ShowCategory</STRING>
    <STRING id="STR_ID_CSB_SCREEN_TEXT">screen</STRING>

    /* Dummy Strings */
    <STRING id="STR_ID_CSB_PROCESSING_TEXT">Processing</STRING>
    <STRING id="STR_ID_CSB_CATEGORY_TEXT">Category</STRING>
    <STRING id="STR_ID_CSB_DUMMY_TEXT">Dummy</STRING>
    <STRING id="STR_ID_CSB_LSK_TEXT">LSK</STRING>
    <STRING id="STR_ID_CSB_RSK_TEXT">RSK</STRING>
    <STRING id="STR_ID_CSB_MENUITEM1_TEXT">MenuItem1</STRING>
    <STRING id="STR_ID_CSB_MENUITEM2_TEXT">MenuItem2</STRING>
    <STRING id="STR_ID_CSB_MENUITEM3_TEXT">MenuItem3</STRING>
    <STRING id="STR_ID_CSB_MENUITEM4_TEXT">MenuItem4</STRING>
    <STRING id="STR_ID_CSB_MENUITEM5_TEXT">MenuItem5</STRING>
    <STRING id="STR_ID_CSB_MENUITEM6_TEXT">MenuItem6</STRING>
    <STRING id="STR_ID_CSB_MENUITEM7_TEXT">MenuItem7</STRING>

    <!-----------------------------------------------------Image Resource Area------------------------------------------------------>



    <!------------------------------------------------------Menu Resource Area------------------------------------------------------>
    <!--Menu Tree Area-->
    /* CSB Main Menu*/
    <MENU id="CSB_MENUID" type="APP_SUB" str="STR_ID_CSB_TEXT">
        <MENUITEM_ID>CSB_VIEW_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_SEARCH_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_TESTOOL_MENUID</MENUITEM_ID>
    </MENU>
    
    /* View Main Menu */
    <MENU id="CSB_VIEW_MENUID" type="APP_SUB" str="STR_ID_CSB_VIEW_TEXT">
        <MENUITEM_ID>CSB_START_VIEW_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_START_VIEW_X_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_VIEW_OPTIONS_MENUID</MENUITEM_ID>
    </MENU>
    
    /* Search Main Menu */
    <MENU id="CSB_SEARCH_MENUID" type="APP_SUB" str="STR_ID_CSB_SEARCH_TEXT">
        <MENUITEM_ID>CSB_SEARCH_CONTROL_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_SEARCH_APP_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_SEARCH_SCREENID_MENUID</MENUITEM_ID>
    </MENU>    

    /* Test Tool Main Menu */
    <MENU id="CSB_TESTOOL_MENUID" type="APP_SUB" str="STR_ID_CSB_TESTTOOL_TEXT">
        <MENUITEM_ID>CSB_TESTOOL_RUN_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_TESTOOL_SET_LOC_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_TESTOOL_VIEW_IMAGES_MENUID</MENUITEM_ID>
    </MENU>    

    /* View Menu */
    <MENUITEM id="CSB_START_VIEW_MENUID" str="STR_ID_CSB_START_VIEW_TEXT"/>    
    <MENUITEM id="CSB_START_VIEW_X_MENUID" str="STR_ID_CSB_START_VIEW_X_TEXT"/>   

    <MENU id="CSB_VIEW_OPTIONS_MENUID" type="APP_SUB" str="STR_ID_CSB_VIEW_OPTIONS_TEXT">
        <MENUITEM_ID>CSB_VIEW_OPTIONS_VIEW_MODE_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_VIEW_OPTIONS_MODE_SETTINGS_MENUID</MENUITEM_ID>
    </MENU>  

    /* View Options Menu */
    <MENU id="CSB_VIEW_OPTIONS_VIEW_MODE_MENUID" type="APP_SUB" str="STR_ID_CSB_OPTIONS_VIEW_MODE_TEXT">
        <MENUITEM_ID>CSB_OPTIONS_VIEW_MODE_MANUAL_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_OPTIONS_VIEW_MODE_AUTO_MENUID</MENUITEM_ID>
    </MENU>     


    /* View Options View Mode */
    <MENUITEM id="CSB_OPTIONS_VIEW_MODE_MANUAL_MENUID" str="STR_ID_CSB_VIEW_MODE_MANUAL_TEXT"/>   
    <MENUITEM id="CSB_OPTIONS_VIEW_MODE_AUTO_MENUID" str="STR_ID_CSB_VIEW_MODE_AUTO_TEXT"/>   

    /* View Options Mode Settings */
    <MENU id="CSB_VIEW_OPTIONS_MODE_SETTINGS_MENUID" type="APP_SUB" str="STR_ID_CSB_OPTIONS_MODE_SETTINGS_TEXT">
        <MENUITEM_ID>CSB_OPTIONS_SETTING_AUTO_MODE_TIME_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_OPTIONS_SETTING_MANUAL_MODE_MENUID</MENUITEM_ID>
    </MENU>     
    
    <MENU id="CSB_OPTIONS_SETTING_MANUAL_MODE_MENUID" type="APP_SUB" str="STR_ID_CSB_MANUAL_MODE_TEXT">
        <MENUITEM_ID>CSB_SETTING_MANUAL_MODE_INTERACTIVE_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_SETTING_MANUAL_MODE_NONINTERACTIVE_MENUID</MENUITEM_ID>
    </MENU>  

    <MENUITEM id="CSB_OPTIONS_SETTING_AUTO_MODE_TIME_MENUID" str="STR_ID_CSB_AUTO_MODE_TIME_TEXT"/>   
    <MENUITEM id="CSB_SETTING_MANUAL_MODE_INTERACTIVE_MENUID" str="STR_ID_CSB_MANUAL_MODE_INTERACTIVE_TEXT"/>   
    <MENUITEM id="CSB_SETTING_MANUAL_MODE_NONINTERACTIVE_MENUID" str="STR_ID_CSB_MANUAL_MODE_NONINTERACTIVE_TEXT"/>   

    /* Search By Control Menu */
    /* View Options Mode Settings */
    <MENU id="CSB_SEARCH_CONTROL_MENUID" type="APP_SUB" str="STR_ID_CSB_SEARCH_CONTROL_TEXT">
        <MENUITEM_ID>CSB_CONTROL_CALL_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_COLOR_PKR_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_EDITOR_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_IDLE_SCREEN_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_IMAGE_VWR_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_LIST_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_MATRIX_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_POPUP_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_PROGRESS_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_SLIDER_MENUID</MENUITEM_ID>        
        <MENUITEM_ID>CSB_CONTROL_RADIO_BUTTON_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_CHECK_BOX_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_SUBLCD_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_CONTROL_PANEL_MENUID</MENUITEM_ID>        
    </MENU>  
    
    /* Search by Application menu */
    <MENU id="CSB_SEARCH_APP_MENUID" type="APP_SUB" str="STR_ID_CSB_SEARCH_APP_TEXT">
        <MENUITEM_ID>CSB_APP_CALLS_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_EDITOR_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_ENGG_MODE_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_EXTRA_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_FUN_AND_GAMES_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_FILE_MANAGER_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_MESSAGES_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_MISC_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_MULTIMEDIA_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_ORGANIZER_MENUID</MENUITEM_ID>        
        <MENUITEM_ID>CSB_APP_PHONEBOOK_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_PROFILE_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_SERVICES_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_SHORTCUT_MENUID</MENUITEM_ID>      
        <MENUITEM_ID>CSB_APP_SETTINGS_MENUID</MENUITEM_ID>        
        <MENUITEM_ID>CSB_APP_WAP_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_APP_HID_MENUID</MENUITEM_ID>
    </MENU>  

    /* Search by Screen ID */
    <MENUITEM id="CSB_SEARCH_SCREENID_MENUID" str="STR_ID_CSB_SEARCH_SCREENID_TEXT"/>   


    /* Control Sub Menus */
    <MENUITEM id="CSB_CONTROL_CALL_MENUID" str="STR_ID_CSB_CALL_SCR_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_COLOR_PKR_MENUID" str="STR_ID_CSB_COLOR_PICKER_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_EDITOR_MENUID" str="STR_ID_CSB_EDITOR_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_EDITOR_LIST_MENUID" str="STR_ID_CSB_EDITOR_LIST_MENU_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_EDITOR_POPUP_MENUID" str="STR_ID_CSB_EDITOR_POPUP_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_IDLE_SCREEN_MENUID" str="STR_ID_CSB_IDLE_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_IMAGE_VWR_MENUID" str="STR_ID_CSB_IMAGE_VIEWER_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_LIST_MENUID" str="STR_ID_CSB_LIST_MENU_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_MATRIX_MENUID" str="STR_ID_CSB_MATRIX_MENU_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_POPUP_MENUID" str="STR_ID_CSB_POPUP_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_PROGRESS_MENUID" str="STR_ID_CSB_PROGRESS_BAR_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_SLIDER_MENUID" str="STR_ID_CSB_SLIDER_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_RADIO_BUTTON_MENUID" str="STR_ID_CSB_RADIO_BUTTON_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_CHECK_BOX_MENUID" str="STR_ID_CSB_CHECK_BOX_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_SUBLCD_MENUID" str="STR_ID_CSB_SUB_LCD_TEXT"/>   
    <MENUITEM id="CSB_CONTROL_PANEL_MENUID" str="STR_ID_CSB_PANEL_TEXT"/>   




    /* Application Sub Menus */
    <MENUITEM id="CSB_APP_CALLS_MENUID" str="STR_ID_CSB_CALLS_TEXT"/>   
    <MENUITEM id="CSB_APP_EDITOR_MENUID" str="STR_ID_CSB_EDITOR_TEXT"/>   
    <MENUITEM id="CSB_APP_ENGG_MODE_MENUID" str="STR_ID_CSB_ENGG_MODE_TEXT"/>   
    <MENUITEM id="CSB_APP_EXTRA_MENUID" str="STR_ID_CSB_EXTRA_TEXT"/>   
    <MENUITEM id="CSB_APP_FUN_AND_GAMES_MENUID" str="STR_ID_CSB_FUN_AND_GAMES_TEXT"/>   
    <MENUITEM id="CSB_APP_FILE_MANAGER_MENUID" str="STR_ID_CSB_FILE_MANAGER_TEXT"/>   
    <MENUITEM id="CSB_APP_MESSAGES_MENUID" str="STR_ID_CSB_MESSAGES_TEXT"/>   
    <MENUITEM id="CSB_APP_MISC_MENUID" str="STR_ID_CSB_MISC_TEXT"/>   
    <MENUITEM id="CSB_APP_MULTIMEDIA_MENUID" str="STR_ID_CSB_MULTIMEDIA_TEXT"/>   
    <MENUITEM id="CSB_APP_ORGANIZER_MENUID" str="STR_ID_CSB_ORGANIZER_TEXT"/>   
    <MENUITEM id="CSB_APP_PHONEBOOK_MENUID" str="STR_ID_CSB_PHONEBOOK_TEXT"/>   
    <MENUITEM id="CSB_APP_PROFILE_MENUID" str="STR_ID_CSB_PROFILE_TEXT"/>   
    <MENUITEM id="CSB_APP_SERVICES_MENUID" str="STR_ID_CSB_SERVICES_TEXT"/>   
    <MENUITEM id="CSB_APP_SHORTCUT_MENUID" str="STR_ID_CSB_SHORTCUT_TEXT"/>   
    <MENUITEM id="CSB_APP_SETTINGS_MENUID" str="STR_ID_CSB_SETTINGS_TEXT"/>   
    <MENUITEM id="CSB_APP_WAP_MENUID" str="STR_ID_CSB_WAP_TEXT"/>   
    <MENUITEM id="CSB_APP_UNUSED_MENUID" str="STR_ID_CSB_UNUSED_TEXT"/>   
    <MENUITEM id="CSB_APP_HID_MENUID" str="STR_ID_CSB_HID_TEXT"/>   

    /* Test Tool menuitems */
    <MENUITEM id="CSB_TESTOOL_RUN_MENUID" str="STR_ID_CSB_RUN_TESTTOOL_TEXT"/>   
    <MENUITEM id="CSB_TESTOOL_SET_LOC_MENUID" str="STR_ID_CSB_SET_LOCATION_TEXT"/>   
    <MENUITEM id="CSB_TESTOOL_VIEW_IMAGES_MENUID" str="STR_ID_CSB_VIEW_IMAGES"/>    
    

    /* Dummy Menuitem */
    <MENU id="CSB_DUMMY_PARENT_MENUID" type="APP_SUB" str="STR_ID_CSB_CATEGORY_TEXT">
        <MENUITEM_ID>CSB_DUMMY_CHILD1_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD2_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD3_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD4_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD5_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD6_MENUID</MENUITEM_ID>
        <MENUITEM_ID>CSB_DUMMY_CHILD7_MENUID</MENUITEM_ID>
    </MENU>     

    <!------------------------------------------------------Other Resource---------------------------------------------------------->
    
    <SCREEN id="SCR_ID_CSB"/>
    <SCREEN id="SCR_ID_CSB_VIEW_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_START_VIEW_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_START_VIEW_X_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_VIEW_OPTIONS_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_OPTIONS_VIEW_MODE_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_OPTIONS_MODE_SETTINGS_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_OPTIONS_AUTO_MODE_TIME_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_OPTIONS_MANUAL_MODE_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SEARCH_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SEARCH_BY_CONT_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SEARCH_BY_APP_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SEARCH_BY_SCRID_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SEARCH_LIST_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_TESTTOOL_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_DUMMY_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_DUMMY_SCR_ID_1"/>
    <SCREEN id="SCR_ID_CSB_DUMMY_SCR_ID_2"/>
    <SCREEN id="SCR_ID_CSB_PROCESSING_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_SHOW_CURR_SCR_ID"/>
    <SCREEN id="SCR_ID_CSB_MEM_ERROR_SCR_ID"/>
    <SCREEN id="GRP_ID_CSB_ROOT"/>
    <SCREEN id="SCR_ID_CSB_DUMMY_2_SCR_ID"/>    
    
    <TIMER id="CSB_AUTO_MODE_TIMER_ID"/>
</APP>

#endif /* __MMI_CSB_BROWSER__ */

