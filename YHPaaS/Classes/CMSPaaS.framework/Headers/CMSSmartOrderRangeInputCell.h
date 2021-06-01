//
//  CMSSmartOrderRangeInputCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
#import "CMSSmartTradeStyleSectionModel.h"
#import "CMSSmartTradeStockInfoCell.h"
#import "CMSSmartTradeOrderModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderRangeInputCellStyleTypeOption : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSString *preffix;
@property (nonatomic, copy) NSString *suffix;
@property (nonatomic, copy) NSString *valueUnit;
@property (nonatomic, copy) NSString *value;
/// 标题颜色
@property (nonatomic, copy) NSString *color;
/// 输入框文本颜色
@property (nonatomic, copy) NSString *inputColor;
@property (nonatomic, strong) NSNumber *inputDecimal;
@property (nonatomic, assign) double inputStepValue;
/// 是否绑定stockModel中的精度步长
@property (nonatomic, assign) BOOL bindStockDecimal;
/// 选中状态
@property (nonatomic, assign) BOOL selected;
@end

@interface CMSSmartOrderRangeInputCellStyleType : NSObject
@property (nonatomic, strong) NSArray<CMSSmartOrderRangeInputCellStyleTypeOption *> * options;
/// type对应的field
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *unitField;
@end



@interface CMSSmartOrderRangeInputCellStyleInput : NSObject

@property (nonatomic, copy) NSString *placeholder;
/// 符号自动切换
@property (nonatomic, assign) BOOL autoSign;
@property (nonatomic, copy) NSString *field;
@end



@interface CMSSmartOrderRangeInputCellStyle : NSObject

@property (nonatomic, strong) CMSSmartOrderRangeInputCellStyleType *type;
@property (nonatomic, strong) CMSSmartOrderRangeInputCellStyleInput *input;
@property (nonatomic, assign) BOOL showPrice;
@property (nonatomic, copy) NSString *explain;
@property (nonatomic, copy) NSString *needfulField;

@end

@interface CMSSmartOrderRangeInputCell : UITableViewCell

@property (nonatomic, assign) CMSSmartTradeOrderType type;
@property (nonatomic, strong) CMSSmartOrderRangeInputCellStyle *style;
@property (nonatomic, strong) CMSSmartTradeStockModel *stockModel;
@property (nonatomic, strong) CMSSmartTradeOrderModel *orderModel;

@end

NS_ASSUME_NONNULL_END
