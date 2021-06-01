//
//  CMSSelfSelectStockTopView.h
//  CMSPaaS
//
//  Created by SJ on 2020/11/5.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"

NS_ASSUME_NONNULL_BEGIN


//可排序滑动，自定义是否滑动 表头view
@interface CMSSelfSelectStockTopView : UIView

//最左边的编辑按钮
@property (nonatomic, strong) UIButton *editBtn;
//最左边的取消按钮
@property (nonatomic, strong) UIButton *cancelSortBtn;
//阴影分割线
@property (nonatomic, strong) UIImageView *shadowImgView;
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;//一屏幕可容几个cell(需先于keysArray配置)
@property (nonatomic, copy) NSString *firstColumnWidth;//左边股票标题区域占比，判断有“%"则为比例，无则为固定值(需先于keysArray配置)
@property (nonatomic, strong) NSString *headerBtnColor; //不设置默认同editBtn同色
@property (nonatomic, assign) BOOL isScrolling; //是否正在滑动
//表头数据
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *titles;
@property (nonatomic, strong) UIScrollView * rightScrollView;//右边菜单栏的背景视图
@property (nonatomic, copy) void(^SelfSelectStockTopViewButtonClickBlock)(CMSStockHeaderModel * item, id sender);
@property (nonatomic, copy) void(^editStockHeaderBlock)(void);
@property (nonatomic, copy) void(^cancelSortBlock)(void);
@property (nonatomic, copy) void(^scrollViewDidScrollBlock)(CGPoint offset);
@property (nonatomic, copy) void(^scrollViewDidEndBlock)(CGPoint offset);
@property (nonatomic, copy) void(^horizontalScrollBlock)(BOOL isScrolling);
@property (nonatomic, copy) NSDictionary *rollingHeaderSelectedState;

- (instancetype)initWithFrame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END
