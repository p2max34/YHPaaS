//
//  CMSSmartOrderEntrustPopCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
#import "CMSSmartTradeStockInfoCell.h"
#import "CMSNumberTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderEntrustPopSubItemModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, assign) BOOL selected;

@end

@interface CMSSmartOrderEntrustPopCellItemTypeModel : NSObject

@property (nonatomic, strong) NSArray<CMSSmartOrderEntrustPopSubItemModel *> *subTypes;
@property (nonatomic, copy) NSString *bindValue;
@property (nonatomic, assign) BOOL selected;

@end

@interface CMSSmartOrderEntrustPopCellItemModel : NSObject
/// 目前有输入框以及选择器
@property (nonatomic, copy) NSString *style;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subName;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *bindField;
@property (nonatomic, strong) NSArray<CMSSmartOrderEntrustPopCellItemTypeModel *> *types;
@property (nonatomic, assign) BOOL selected;
/// 是否支持该type, 科创板不支持market
@property (nonatomic, assign) BOOL isSupport;

@end

@interface CMSSmartOrderEntrustPopCellStyle : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSArray<CMSSmartOrderEntrustPopCellItemModel *> *types;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *showStringOnSubmitView;
@property (nonatomic, copy) NSString *needfulField;

@end

@interface CMSSmartOrderEntrustPopCellInputDescribeView : UIView

@property (nonatomic, strong) UILabel *costDesLabel;
@property (nonatomic, strong) UILabel *costLabel;
@property (nonatomic, strong) UILabel *profitLossDeslLabel;
@property (nonatomic, strong) UILabel *profitLossLabel;
@property (nonatomic, strong) UILabel *profitLossUnitLabel;

- (void)setLeftText:(NSString *)leftText rightText:(NSString *)rightText unit:(NSString *)unit;

@end

@interface CMSSmartOrderEntrustPopCell : UITableViewCell

@property (nonatomic, strong) CMSSmartOrderEntrustPopCellStyle *style;
@property (nonatomic, copy) void(^selectedBlock)(NSDictionary *keyValues);
@property (nonatomic, copy) void(^faildSupportTypeBlock)(CMSSmartOrderEntrustPopCellItemModel *type);
@property (nonatomic, strong) NSDictionary *fieldValue;
@property (nonatomic, strong) CMSNumberTextField *priceTextField;
@property (nonatomic, strong) CMSSmartOrderEntrustPopCellInputDescribeView *describeView;

- (void)updateInputDescribeView:(BOOL)showInputDescribe;

@end

NS_ASSUME_NONNULL_END
