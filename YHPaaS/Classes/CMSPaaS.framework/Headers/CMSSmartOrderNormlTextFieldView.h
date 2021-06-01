//
//  CMSSmartOrderNormlTextFieldView.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/26.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSNumberTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderNormalNumberInputStyle : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) double miniValue;
@property (nonatomic, assign) NSNumber *decimail;
@property (nonatomic, assign) double stepValue;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *inputType; //用来标记field字段对应的值类型。因为这个控件是通用的，有的是字符串类型，有的是数字
@property (nonatomic, assign) BOOL bindStockDecimal;
@property (nonatomic, assign) BOOL bindStockMinQuanity;
@property (nonatomic, copy) NSString *needfulField;
@property (nonatomic, assign) BOOL showInputDescribe;

@end

@interface CMSSmartOrderNormlTextFieldView : UIView

@property (nonatomic, strong) CMSNumberTextField *priceTextField;
@property (nonatomic, strong) CMSSmartOrderNormalNumberInputStyle *model;

@end

NS_ASSUME_NONNULL_END
