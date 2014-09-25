//
//  EOSNavigationViewController.h
//  EOSFramework
//
//  Created by Sam Chang on 8/29/12.
//
//

#import <UIKit/UIKit.h>
#import "PagePanel.h"

@interface EOSNavigationViewController : UINavigationController<PagePanel>{
    UIViewController<PagePanel> *parent;
}

@end
