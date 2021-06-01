//
//  CMSSmartStockPriceInputCell.h
//  Pods-CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/1/13.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderNormlTextFieldView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartStockPriceInputCell : UITableViewCell

@property (nonatomic, strong) CMSSmartOrderNormalNumberInputStyle *style;
@property (nonatomic, strong) CMSSmartOrderNormlTextFieldView *textFieldView;

@end

NS_ASSUME_NONNULL_END
