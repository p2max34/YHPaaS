//
//  CMSSmartTradeStockInfoCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/13.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
#import "CMSTargetDataLabel.h"
#import <KVOController/KVOController.h>

NS_ASSUME_NONNULL_BEGIN
@interface CMSSmartTradeStockInfoCellStyle : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *priceDesName;
@property (nonatomic, copy) NSString *rangeDesName;

@end

@interface CMSSmartTradeStockInfoCell : UITableViewCell

@property (nonatomic, copy) void(^searchStockClickBlock)(void);
@property (nonatomic, copy) void(^stockDetailClickBlock)(NSString *productNumber);
@property (nonatomic, copy) void(^searchStockInfoBlock)(NSString *productNumber);

@property (nonatomic, strong) CMSSmartTradeStockInfoCellStyle *style;

@property (nonatomic, strong) CMSTargetDataLabel *priceLabel;
@property (nonatomic, strong) CMSTargetDataLabel *rangeLabel;
@property (nonatomic, strong) UIButton *searchButton;

@property (nonatomic, strong) UITextField *codeTextField;
@property (nonatomic, strong) UILabel *stockNameLabel;
@property (nonatomic, assign) NSInteger maxCountOfStockCode;

@end

NS_ASSUME_NONNULL_END
