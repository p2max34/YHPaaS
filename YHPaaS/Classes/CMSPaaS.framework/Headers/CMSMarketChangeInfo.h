//
//  CMSMarketChangeInfo.h
//  CMSPaaS
//
//  Created by sway on 2021/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMarketChangeInfo : NSObject
@property (nonatomic, copy) NSString *blockName;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) NSNumber *blockChangeRate;

@end

NS_ASSUME_NONNULL_END
