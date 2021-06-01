//
//  CMSSmartOrderBySellHeaderView.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeOrderModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface CMSSmartOrderBySellHeaderViewModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSString *switchStatus;
@property (nonatomic, copy) NSString *switchDesName;
@property (nonatomic, copy) NSString *describe;
@property (nonatomic, assign) BOOL isUnfold;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *bindHeaderName;

@end

@interface CMSSmartOrderBySellHeaderView : UITableViewHeaderFooterView

@property (nonatomic, strong) CMSSmartOrderBySellHeaderViewModel *model;

@end

NS_ASSUME_NONNULL_END
