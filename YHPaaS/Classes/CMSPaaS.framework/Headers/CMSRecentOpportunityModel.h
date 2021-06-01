//
//  CMSRecentOpportunityModel.h
//  CMSPaaS
//
//  Created by sway on 2021/3/3.
//

#import <Foundation/Foundation.h>
#import "CMSStockBlockModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSRecentOpportunityModel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *date;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) CMSStockBlockModel *relativeBlock;

@end

NS_ASSUME_NONNULL_END
