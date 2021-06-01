//
//  CMSHuShenGangTongCapitalFlowModel.h
//  CMSPaaS
//
//  Created by sway on 2021/3/2.
//

#import <Foundation/Foundation.h>
#import "CMSHuShenGangTongCapitalFlowView.h"

NS_ASSUME_NONNULL_BEGIN
@interface CMSHuShenGangTongCapitalFlow: NSObject
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, strong) NSArray<CMSHuShenGangTongCapitalFlowItem *> *list;

@end
@interface CMSHuShenGangTongCapitalFlowModel : NSObject
@property (nonatomic, strong) CMSHuShenGangTongCapitalFlow *north;
@property (nonatomic, strong) CMSHuShenGangTongCapitalFlow *south;

@end

NS_ASSUME_NONNULL_END
