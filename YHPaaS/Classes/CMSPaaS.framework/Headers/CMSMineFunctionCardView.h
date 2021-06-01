//
//  CMSMineFunctionCardView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSMineFunctionModelProtocol;

@interface CMSMineFunctionCardView : UIView

- (void)setTitleModel:(id<CMSMineFunctionModelProtocol>)titleModel
        subTitleModel:(id<CMSMineFunctionModelProtocol>)subTitleModel
          detailModel:(id<CMSMineFunctionModelProtocol> _Nullable)detailModel
       subDetailModel:(id<CMSMineFunctionModelProtocol> _Nullable)subDetailModel
             tagImage:(NSString * _Nullable )tagImage
                  uri:(NSString *)uri;

@end

NS_ASSUME_NONNULL_END
