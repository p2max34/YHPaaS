//
//  CMSSmartOrderNormalNumberInputCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderNormlTextFieldView.h"
#import "CMSSmartTradeStockInfoCell.h"

NS_ASSUME_NONNULL_BEGIN
@interface CMSSmartOrderNormalNumberInputDescribeView : UIView

@property (nonatomic, strong) UILabel *ownedAmountDesLabel;
@property (nonatomic, strong) UILabel *ownedAmountLabel;
@property (nonatomic, strong) UILabel *availableOwnedAmountDesLabel;
@property (nonatomic, strong) UILabel *availableOwnedAmountLabel;

- (void)setOwnedAcountText:(NSString *)ownedAccount availableAcount:(NSString *)availableAcount;

@end

@interface CMSSmartOrderNormalNumberInputCell : UITableViewCell

@property (nonatomic, strong) CMSSmartOrderNormalNumberInputStyle *style;

@property (nonatomic, strong) CMSSmartOrderNormlTextFieldView *textFieldView;

@property (nonatomic, strong) CMSSmartOrderNormalNumberInputDescribeView *decribeView;

- (void)showTipsView:(NSString *)tips showView:(UIView *)showView;

@end

NS_ASSUME_NONNULL_END
