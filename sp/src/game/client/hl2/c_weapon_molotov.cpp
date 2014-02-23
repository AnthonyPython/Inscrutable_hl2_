//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#include "cbase.h"
#include "model_types.h"
#include "clienteffectprecachesystem.h"
#include "fx.h"
#include "c_te_effect_dispatch.h"
#include "beamdraw.h"
#include "c_basehlcombatweapon.h"
#include "iviewrender_beams.h"
#include "beam_shared.h"
#include "c_weapon__stubs.h"
#include "materialsystem/imaterial.h"



//
// molotov
//


class CWeaponMolotov : public C_BaseCombatCharacter
{
	DECLARE_CLASS( CWeaponMolotov, C_BaseCombatCharacter );
	DECLARE_CLIENTCLASS();
public:

	CWeaponMolotov( void );



private:
	
};

	