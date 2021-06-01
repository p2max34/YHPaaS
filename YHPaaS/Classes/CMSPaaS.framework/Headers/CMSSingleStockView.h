//
//  CMSSingleStockView.h
//  CMSPaaS
//
//  Created by sway on 2020/12/23.
//

#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSingleStockView : UIView
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *nowPriceLabel;
@property (nonatomic, strong) UILabel *riseFallLabel;
@property (nonatomic, strong) UILabel *gainsLabel;
@property (nonatomic, strong) id<CMSStockProtocol> model;

@end

NS_ASSUME_NONNULL_END
