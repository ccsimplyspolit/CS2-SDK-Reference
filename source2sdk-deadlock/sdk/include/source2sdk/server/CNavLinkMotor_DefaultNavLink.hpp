#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BodySectionAuthority_t.hpp"
#include "source2sdk/server/CNavLinkMotor_DefaultNavLink_State_t.hpp"
#include "source2sdk/server/CNavLinkMotor_DefaultNavLink_TargetType_t.hpp"
#include "source2sdk/server/CRelativeTransform.hpp"
#include "source2sdk/server/INavLinkMotor.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CNavLinkAreaEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CNavLinkMotor_DefaultNavLink_GraphController;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x100
        // Has VTable
        #pragma pack(push, 1)
        class CNavLinkMotor_DefaultNavLink : public source2sdk::server::INavLinkMotor
        {
        public:
            std::int32_t m_nNavLinkIndex; // 0x18            
            std::int32_t m_nTickStarted; // 0x1c            
            // m_hNavLinkEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CNavLinkAreaEntity> m_hNavLinkEntity;
            char m_hNavLinkEntity[0x4]; // 0x20            
            source2sdk::server::CNavLinkMotor_DefaultNavLink_State_t m_eState; // 0x24            
            source2sdk::server::CNavLinkMotor_DefaultNavLink_TargetType_t m_eTargetType; // 0x28            
            source2sdk::client::BodySectionAuthority_t m_eBodySectionAuthority; // 0x2c            
            bool m_bIsFromMovement; // 0x30            
            uint8_t _pad0031[0xf]; // 0x31
            source2sdk::server::CRelativeTransform m_source; // 0x40            
            source2sdk::server::CRelativeTransform m_target; // 0x70            
            CTransformWS m_tSourcePrevious; // 0xa0            
            CTransformWS m_tTargetPrevious; // 0xc0            
            // metadata: MSaveOpsForField
            source2sdk::server::CNavLinkMotor_DefaultNavLink_GraphController* m_pGraphController; // 0xe0            
            uint8_t _pad00e8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_DefaultNavLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_DefaultNavLink) == 0x100);
    };
};
