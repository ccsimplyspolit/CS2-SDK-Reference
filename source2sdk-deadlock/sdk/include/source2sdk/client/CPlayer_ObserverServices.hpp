#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/ObserverMode_t.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_iObserverMode"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
        #pragma pack(push, 1)
        class CPlayer_ObserverServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverModeChanged"
            std::uint8_t m_iObserverMode; // 0x48            
            uint8_t _pad0049[0x3]; // 0x49
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverTargetChanged"
            // m_hObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hObserverTarget;
            char m_hObserverTarget[0x4]; // 0x4c            
            source2sdk::client::ObserverMode_t m_iObserverLastMode; // 0x50            
            bool m_bForcedObserverMode; // 0x54            
            uint8_t _pad0055[0x3]; // 0x55
            // metadata: MNotSaved
            float m_flObserverChaseDistance; // 0x58            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flObserverChaseDistanceCalcTime; // 0x5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_ObserverServices) == 0x60);
    };
};
