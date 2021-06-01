//
//  CMSQuoteRestTitleModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteRestTitleModel : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, copy)   NSString *dataKey;
@property (nonatomic, copy)   NSString *param;
@property (nonatomic, copy)   NSString *headerKey;

@end

NS_ASSUME_NONNULL_END
