#include <ICollegue.h>
#include <IMediator.h>

class CollegueBase : public ICollegue
{
public:
    CollegueBase(IMediator *mediator, const int id);

    virtual void send(const std::string &message) override;
    virtual void recieve(const std::string &message) const override;
    virtual int getId() const override;

protected:
    IMediator *m_mediator;
    int m_id;
};
