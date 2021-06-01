//
//  CMSMineCustomerServiceView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/4.
//

#import <UIKit/UIKit.h>
#import "CMSTitleIconModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSMineCustomerServiceView : UIView

@property (nonatomic, copy)   NSString *messageColor;
@property (nonatomic, copy)   NSString *titleColor;
@property (nonatomic, strong) UIFont   *titleFont;
@property (nonatomic, strong) UIFont   *messageFont;

- (instancetype)initWithTitle:(NSString * _Nullable)title
                  headerImage:(NSString * _Nullable)headerImage
                      message:(NSString * _Nullable)message
                          uri:(NSString * _Nullable)uri
                 buttonModels:(NSArray <id<CMSTitleIconModelProtocol>> *)btnModels;

@end

NS_ASSUME_NONNULL_END
