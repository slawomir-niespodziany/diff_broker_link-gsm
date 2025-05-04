#pragma once

#include <ILink.h>
#include <diff/Component.h>

class LinkGsm : public diff::Component<LinkGsm, diff::as<ILink>> {
public:
    LinkGsm();
    virtual ~LinkGsm();

    bool send(const std::string &message) override;

private:
    const int linkReliability_;
};
