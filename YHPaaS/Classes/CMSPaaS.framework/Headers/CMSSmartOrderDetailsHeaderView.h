//
//  CMSSmartOrderDetailsHeaderView.h
//  CMSPaaSBenchmark
//
//  Created by love on 2020/11/24.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderDetailsHeaderView : UITableViewHeaderFooterView
@property (nonatomic, strong) CMSSmartOrderModel *model;
@end

NS_ASSUME_NONNULL_END
