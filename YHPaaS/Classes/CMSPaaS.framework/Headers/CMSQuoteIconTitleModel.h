//
//  CMSQuoteIconTitleModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteIconTitleModel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *imageKey;
@property (nonatomic, assign) NSInteger index;
@end

NS_ASSUME_NONNULL_END
