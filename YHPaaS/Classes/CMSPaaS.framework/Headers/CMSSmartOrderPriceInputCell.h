//
//  CMSSmartOrderPriceInputCell.h
//  AFNetworking
//
//  Created by 吴演 on 2020/12/8.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
#import "CMSNumberTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderPriceInputCellStyle : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) double miniValue;
@property (nonatomic, assign) NSNumber *decimail;
@property (nonatomic, assign) double stepValue;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, assign) BOOL bindStockDecimal;
@property (nonatomic, copy) NSString *needfulField;
@property (nonatomic, assign) BOOL firstShowStockPrice;
@property (nonatomic, strong) NSDictionary *typeValue;
@property (nonatomic, copy) NSString *typeField;
@end

@interface CMSSmartOrderPriceInputCell : UITableViewCell

@property (nonatomic, strong) CMSSmartOrderPriceInputCellStyle *style;
@property (nonatomic, strong) CMSNumberTextField *priceTextField;
@property (nonatomic, copy) NSString *stockPrice;

@end

NS_ASSUME_NONNULL_END
