#import <UIKit/UIKit.h>
#import "MPFlipViewController.h"

@interface ViewController : UIViewController<MPFlipViewControllerDelegate, MPFlipViewControllerDataSource>

@property (strong, nonatomic) MPFlipViewController *flipViewController;
@property (weak, nonatomic) IBOutlet UIView *frame;
@property (weak, nonatomic) IBOutlet UIView *corkboard;

@end
