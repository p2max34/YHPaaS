//
//  CMSImageKey.h
//  CMSPaaS
//
//  Created by admin on 2020/12/24.
//

#ifndef CMSImageKey_h
#define CMSImageKey_h

/**
 * bundle://"imageName"?  本地bundle 解析 ，不支持皮肤，需要用系统的皮肤
 *
 * imagePath  resourceLoader getImageForUrl 协议方法解析 不适配皮肤
 *
 * file://"imagePath"?
 *
 * http://"imagePath"? 或 https://"imagePath"?  sd_setImage 协议方法解析 不适配皮肤
 *
 * "imagePath"?themeName="themeName"
 * imageDataWithKeyPath 协议方法解析
 * themeName 是否指定皮肤（nil 默认 适配皮肤）
 *
 */

/// loading 套图
static NSString *loadingImagePath = @"appres/skinImage/light/loading/";
/// common
static NSString *yellowArrowIconKey = @"yellow_arrow_icon";
static NSString *searchKeyboardIconKey = @"search_keyboard_icon";
static NSString *upperShiftIconKey = @"upper_shift_icon";
static NSString *lowerShiftIconKey = @"lower_shift_icon";
static NSString *arrowDownIconKey = @"arrow_down_icon";
static NSString *loadingEmptyKey = @"load_empty_icon";
static NSString *loadingNoLoginKey = @"load_login_icon";
static NSString *loadingErrorKey = @"load_error_icon";
static NSString *redRefreshIconKey = @"red_refresh_icon";
static NSString *whiteRefreshIconKey = @"white_refresh_icon";
static NSString *arrowRightIconKey = @"arrow_right_icon";
static NSString *arrowDownLineIconKey = @"arrow_down_line_icon";

static NSString *menuIconKey = @"menu_icon";
static NSString *closeIconKey = @"close_icon";
static NSString *sortArrowIconKey = @"sort_arrow_icon";
static NSString *sortArrowDownIconKey = @"sort_arrowDown_icon";
static NSString *sortArrowUpIconKey = @"sort_arrowUp_icon";
static NSString *checkboxSelectIconKey = @"checkbox_select_icon";
static NSString *checkboxIconKey = @"checkbox_icon";
static NSString *arrowBackIconKey = @"arrow_back_icon";
static NSString *searchIconKey = @"search_icon";
/// 自选
static NSString *selfStock_infoIconKey = @"selfStock_info_icon";
static NSString *selfStock_MoneyIconKey = @"selfStock_money_icon";
static NSString *selfStock_addStockIconKey = @"selfStock_addStock_icon";
static NSString *selfStock_longhubang_logoIconKey = @"selfStock_longhubang_logo";
static NSString *selfStock_addGroupIconKey = @"selfStock_addGroup_icon";
static NSString *selfStock_editGroupIconKey = @"selfStock_editGroup_icon";
static NSString *selfStock_arrowRightIconKey = @"selfStock_arrow_right_icon";
static NSString *selfStock_remindIconKey = @"selfStock_remind_icon";
static NSString *selfStock_placedTopIconKey = @"selfStock_placedTop_icon";
static NSString *selfStock_renameIconKey = @"selfStock_rename_icon";
static NSString *selfStock_deleteIconKey = @"selfStock_delete_icon";
static NSString *selfStock_visibleIconKey = @"selfStock_visible_icon";
static NSString *selfStock_invisibleIconKey = @"selfStock_invisible_icon";
static NSString *selfStock_dragIconKey = @"selfStock_drag_icon";

/// 智能下单
static NSString *smartOrderTextFieldPlusIconKey = @"smartOrder_textField_plus_icon";
static NSString *smartOrderTextFieldMinusIconKey = @"smartOrder_textField_minus_icon";
static NSString *smartOrderArrowBottomKey = @"smartOrder_arrow_bottom";
static NSString *smartOrderSearchIconKey = @"smartOrder_search_icon";
static NSString *smartOrderPriceFallIconKey = @"smartOrder_price_fall_icon";
static NSString *smartOrderPriceRaiseIconKey = @"smartOrder_price_raise_icon";
static NSString *smartOrderRangeArrowIconKey = @"smartOrder_range_arrow_icon";

/// 行情
static NSString *quoteStockMapShareIconKey = @"quote_stockMap_share_icon";
static NSString *quoteStockMapShareLandscapeIconKey = @"quote_stockMap_share_landscape_icon";
static NSString *quoteStockMapZomInIconKey = @"quote_stockMap_zoomIn_icon";
static NSString *quoteStockMapZomOutIconKey = @"quote_stockMap_zoomOut_icon";
static NSString *quoteStockMapBgKey = @"quote_stockMap_bg";
static NSString *quoteStockMapLandscapeBgKey = @"quote_stockMap_landscape_bg";
static NSString *quoteStockCustomCellIcon = @"quote_custom_cell_icon";

static NSString *quoteRectangleRedIconKey = @"quote_rectangle_red_icon";
static NSString *quoteRectangleGrayIconKey = @"quote_rectangle_gray_icon";
static NSString *quoteRectangleGreenIconKey = @"quote_rectangle_green_icon";

#endif /* CMSImageKey_h */
