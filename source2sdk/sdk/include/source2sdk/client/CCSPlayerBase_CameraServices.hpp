#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_CameraServices.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2a8
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerBase_CameraServices : public source2sdk::client::CPlayer_CameraServices
        {
        public:
            std::uint32_t m_iFOV; // 0x290            
            std::uint32_t m_iFOVStart; // 0x294            
            source2sdk::entity2::GameTime_t m_flFOVTime; // 0x298            
            float m_flFOVRate; // 0x29c            
            // m_hZoomOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hZoomOwner;
            char m_hZoomOwner[0x4]; // 0x2a0            
            float m_flLastShotFOV; // 0x2a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerBase_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerBase_CameraServices) == 0x2a8);
    };
};
