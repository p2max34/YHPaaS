//
//  CMSQuotesCommentModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/3/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCommentModel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *uri;
@end

NS_ASSUME_NONNULL_END
