//
//  CMSMarqueeOptionalEventModel.h
//  CMSPaaS
//
//  Created by SJ on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMarqueeOptionalEventModel : NSObject

@property (nonatomic, copy) NSString *tag;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *uri;

@end

NS_ASSUME_NONNULL_END
